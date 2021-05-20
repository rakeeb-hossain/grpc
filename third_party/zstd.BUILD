package(default_visibility = ["//visibility:public"])

cc_library(
    name = "zstd",
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
)

cc_library(
    name = "zstd_header",
    hdrs = ["lib/zstd.h"],
    strip_include_prefix = "lib",
)
