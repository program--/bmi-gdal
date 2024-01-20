#include "GDALBmi.hpp"

#include <gdal.h>

struct GDALRasterBmi : public GDALBmi
{
    void                     Initialize(std::string config_file) override;
    void                     Finalize() override;
    std::string              GetComponentName() override;
    int                      GetInputItemCount() override;
    int                      GetOutputItemCount() override;
    std::vector<std::string> GetInputVarNames() override;
    std::vector<std::string> GetOutputVarNames() override;
    int                      GetVarGrid(std::string name) override;
    std::string              GetVarType(std::string name) override;
    std::string              GetVarUnits(std::string name) override;
    int                      GetVarItemsize(std::string name) override;
    int                      GetVarNbytes(std::string name) override;
    std::string              GetVarLocation(std::string name) override;
    void                     GetValue(std::string name, void* dest) override;
    void*                    GetValuePtr(std::string name) override;
    void                     GetValueAtIndices(std::string name, void* dest, int* inds, int count) override;
    void                     SetValue(std::string name, void* src) override;
    void                     SetValueAtIndices(std::string name, int* inds, int count, void* src) override;
    int                      GetGridRank(const int grid) override;
    int                      GetGridSize(const int grid) override;
    std::string              GetGridType(const int grid) override;
    void                     GetGridShape(const int grid, int* shape) override;
    void                     GetGridSpacing(const int grid, double* spacing) override;
    void                     GetGridOrigin(const int grid, double* origin) override;
    void                     GetGridX(const int grid, double* x) override;
    void                     GetGridY(const int grid, double* y) override;
    void                     GetGridZ(const int grid, double* z) override;
    int                      GetGridNodeCount(const int grid) override;
    int                      GetGridEdgeCount(const int grid) override;
    int                      GetGridFaceCount(const int grid) override;
    void                     GetGridEdgeNodes(const int grid, int* edge_nodes) override;
    void                     GetGridFaceEdges(const int grid, int* face_edges) override;
    void                     GetGridFaceNodes(const int grid, int* face_nodes) override;
    void                     GetGridNodesPerFace(const int grid, int* nodes_per_face) override;

  private:
    const static std::string inputs_[];
    const static std::string outputs_[];

    GDALDatasetH data_;
};
