package(default_visibility = ["//visibility:public"])

cc_library(
    name = "zstd",
    deps = [":libzstd", ":zlibWrapper_header"],
    srcs = glob(
        [
            "zlibWrapper/zstd_zlibwrapper.c",
            "zlibWrapper/gz*.c",
            "zlibWrapper/gz*.h",
        ],
    ) + ["zlibWrapper/zstd_zlibwrapper.h"],
    defines = ["ZWRAP_USE_ZSTD=1"],
    linkstatic = 1,
)

cc_library(
    name = "zlibWrapper_header",        
    hdrs = ["zlibWrapper/zstd_zlibwrapper.h"],
    strip_include_prefix = "zlibWrapper",
)

cc_library(
    name = "libzstd",
    copts = [
        "-DXXH_NAMESPACE=ZSTD_",
        "-DZSTD_MULTITHREAD",
    ],
    linkopts = ["-lpthread"],
    deps = [":zstd_header"],
    srcs = glob(
        [
            "lib/decompress/*.c",
            "lib/decompress/*.h",
            "lib/common/*.c",
            "lib/common/*.h",
            "lib/dictBuilder/*.c",
            "lib/dictBuilder/*.h",
            "lib/deprecated/*.c",
            "lib/deprecated/*.h",
            "lib/compress/*.c",
            "lib/compress/*.h",
            "lib/zstd_errors.h",
            "lib/zdict.h",
        ],
    ) + ["lib/zstd.h"],
    linkstatic = 1,
)

cc_library(
    name = "zstd_header",
    hdrs = ["lib/zstd.h"],
    strip_include_prefix = "lib",
)
