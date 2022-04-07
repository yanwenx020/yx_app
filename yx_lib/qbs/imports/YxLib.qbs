import qbs

YxProduct {
    type: ["dynamiclibrary"]
    cpp.defines: base.concat("YX_" + [name.toUpperCase() + "_LIBRARY"])

    Export {
        Depends {
            name: "cpp"
        }
    }
}
