import qbs

Project {
    minimumQbsVersion: "1.7.1"
    readonly property string app_name: "yx_app"
    readonly property path app_path: path
    property path lib_path: app_path + "/yx_lib"
    qbsSearchPaths: lib_path + "/qbs"
    property bool is_sub_project: false

    Product {
        condition: !is_sub_project
        name: app_name + "_qbs_modules"
        files: [lib_path + "/qbs/**"]
    }

    references: {
        result = [
            "src/src.qbs",
        ]
        if (!is_sub_project)
            result.push(lib_path + "/src/libs/libs.qbs")
        return result
    }
}
