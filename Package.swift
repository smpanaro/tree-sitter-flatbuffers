// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterFlatbuffers",
    products: [
        .library(name: "TreeSitterFlatbuffers", targets: ["TreeSitterFlatbuffers"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterFlatbuffers",
            dependencies: [],
            path: ".",
            exclude: [
                "Cargo.toml",
                "Makefile",
                "binding.gyp",
                "bindings/c",
                "bindings/go",
                "bindings/node",
                "bindings/python",
                "bindings/rust",
                "prebuilds",
                "grammar.js",
                "package.json",
                "package-lock.json",
                "pyproject.toml",
                "setup.py",
                "test",
                "examples",
                ".editorconfig",
                ".github",
                ".gitignore",
                ".gitattributes",
                ".gitmodules",
            ],
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterFlatbuffersTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterFlatbuffers",
            ],
            path: "bindings/swift/TreeSitterFlatbuffersTests"
        )
    ],
    cLanguageStandard: .c11
)
