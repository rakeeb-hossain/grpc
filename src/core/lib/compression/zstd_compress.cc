#include "zstd_compress.h"
#include <stdio.h>

int zstd_inflateInit2(z_streamp zs, int flush) { return inflateInit2(zs, flush); }

int zstd_inflate(z_streamp zs, int flush) { return inflate(zs, flush); }

int zstd_inflateEnd(z_streamp zs) { return inflateEnd(zs); }

int zstd_deflateInit2(z_streamp zs, int level, int method, int windowBits, int memLevel, int strategy) { return deflateInit2(zs, level, method, windowBits, memLevel, strategy); }

int zstd_deflate(z_streamp zs, int flush) { return deflate(zs, flush); }

int zstd_deflateEnd(z_streamp zs) { return deflateEnd(zs); }
