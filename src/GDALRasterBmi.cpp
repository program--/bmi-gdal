#include "GDALRasterBmi.hpp"

#include <array>
#include <stdexcept>

#include <gdal.h>

void GDALRasterBmi::Initialize(std::string config_file)
{
    data_ = GDALOpenEx(config_file.c_str(), GDAL_OF_READONLY, nullptr, nullptr, nullptr);
}

void GDALRasterBmi::Finalize()
{
    if (data_ != nullptr) {
        GDALClose(data_);
    }
}

auto GDALRasterBmi::GetGridType(const int grid)
  -> std::string
{
    return "uniform_rectilinear";
}

auto GDALRasterBmi::GetGridOrigin(const int grid, double* origin)
  -> void
{
    std::array<double, 6> geotransform = {0};
    auto err = GDALGetGeoTransform(data_, geotransform.data());

    if (err != CE_None) {
        throw std::runtime_error{CPLGetLastErrorMsg()};
    }

    origin[0] = geotransform[0];
    origin[1] = geotransform[3];
}
