#include "GDALBmi.hpp"

GDALBmi::~GDALBmi() = default;

auto GDALBmi::Update() -> void
{
    return;
}

auto GDALBmi::UpdateUntil(double time) -> void
{
    return;
}

auto GDALBmi::GetCurrentTime() -> double
{
    return 0.0;
}

auto GDALBmi::GetStartTime() -> double
{
    return 0.0;
}

auto GDALBmi::GetEndTime() -> double
{
    return 0.0;
}

auto GDALBmi::GetTimeUnits() -> std::string
{
    return "none";
}

auto GDALBmi::GetTimeStep() -> double
{
    return 0.0;
}
