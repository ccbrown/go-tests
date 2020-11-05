//go:cgo_import_dynamic _ _ "./dylib/libfoo.so"
//go:cgo_ldflag "-Wl,-plugin=./plugin/plugin.so"
//_ _ "./dylib/libfoo.so"
//go:cgo_ldflag "-Wl,-plugin=./plugin/plugin.so"
//""
extern "C" void _____QDSdylibSlibfooDsoQ_SSgoCcgo_ldflag_QHWlCHpluginEDSpluginSpluginDsoQ_SS() {}
