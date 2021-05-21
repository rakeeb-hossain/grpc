#include "zstd_zlibwrapper.h"

int zstd_inflateInit2(z_streamp zs, int flush);

int zstd_inflate(z_streamp zs, int flush);

int zstd_inflateEnd(z_streamp zs);

int zstd_deflateInit2(z_streamp zs, int level, int method, int windowBits, int memLevel, int strategy);

int zstd_deflate(z_streamp zs, int flush);

int zstd_deflateEnd(z_streamp zs);
