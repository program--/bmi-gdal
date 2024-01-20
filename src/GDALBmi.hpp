#pragma once

#include "bmi.hpp"

struct GDALBmi : public bmi::Bmi
{
    // Implemented
    // ========================================================================

    virtual ~GDALBmi();

    void        Update() override;
    void        UpdateUntil(double time) override;
    double      GetCurrentTime() override;
    double      GetStartTime() override;
    double      GetEndTime() override;
    std::string GetTimeUnits() override;
    double      GetTimeStep() override;

    // Pure Virtual
    // ========================================================================

    void                     Initialize(std::string config_file) override                                   = 0;
    void                     Finalize() override                                                            = 0;
    std::string              GetComponentName() override                                                    = 0;
    int                      GetInputItemCount() override                                                   = 0;
    int                      GetOutputItemCount() override                                                  = 0;
    std::vector<std::string> GetInputVarNames() override                                                    = 0;
    std::vector<std::string> GetOutputVarNames() override                                                   = 0;
    int                      GetVarGrid(std::string name) override                                          = 0;
    std::string              GetVarType(std::string name) override                                          = 0;
    std::string              GetVarUnits(std::string name) override                                         = 0;
    int                      GetVarItemsize(std::string name) override                                      = 0;
    int                      GetVarNbytes(std::string name) override                                        = 0;
    std::string              GetVarLocation(std::string name) override                                      = 0;
    void                     GetValue(std::string name, void* dest) override                                = 0;
    void*                    GetValuePtr(std::string name) override                                         = 0;
    void                     GetValueAtIndices(std::string name, void* dest, int* inds, int count) override = 0;
    void                     SetValue(std::string name, void* src) override                                 = 0;
    void                     SetValueAtIndices(std::string name, int* inds, int count, void* src) override  = 0;
    int                      GetGridRank(const int grid) override                                           = 0;
    int                      GetGridSize(const int grid) override                                           = 0;
    std::string              GetGridType(const int grid) override                                           = 0;
    void                     GetGridShape(const int grid, int* shape) override                              = 0;
    void                     GetGridSpacing(const int grid, double* spacing) override                       = 0;
    void                     GetGridOrigin(const int grid, double* origin) override                         = 0;
    void                     GetGridX(const int grid, double* x) override                                   = 0;
    void                     GetGridY(const int grid, double* y) override                                   = 0;
    void                     GetGridZ(const int grid, double* z) override                                   = 0;
    int                      GetGridNodeCount(const int grid) override                                      = 0;
    int                      GetGridEdgeCount(const int grid) override                                      = 0;
    int                      GetGridFaceCount(const int grid) override                                      = 0;
    void                     GetGridEdgeNodes(const int grid, int* edge_nodes) override                     = 0;
    void                     GetGridFaceEdges(const int grid, int* face_edges) override                     = 0;
    void                     GetGridFaceNodes(const int grid, int* face_nodes) override                     = 0;
    void                     GetGridNodesPerFace(const int grid, int* nodes_per_face) override              = 0;
};
