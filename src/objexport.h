#pragma once

struct Params {
    const char* filename;
    const char* apiKey;
    int tile[3];
    float offset[2];
    bool splitMesh;
    int aoSizeHint;
    int aoSamples;
    bool bakeAO;
    bool append;
};

#ifdef __cplusplus
extern "C" {
#endif

int objexport(struct Params parameters);

#ifdef __cplusplus
}
#endif
