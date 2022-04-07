import qbs

Product {
    targetName: "yx_" + name
    property bool install: true
    property string installDir
    property stringList installTags: type

    Depends {
        name: "cpp"
    }
    Depends {
        name: "yx"
    }

    cpp.includePaths: [yx.yx_lib_path]

    Properties {
        condition: qbs.toolchain.contains("msvc")
        cpp.defines: outer.concat("_SCL_SECURE_NO_WARNINGS", "NOMINMAX")
    }

    files: ["**/*.cpp", "**/*.h", "**/*.ui"]
    Group {
        fileTagsFilter: installTags
        qbs.install: install
        qbs.installDir: installDir
    }
}
