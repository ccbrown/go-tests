//go:cgo_import_dynamic _ _ "./dylib/libfoo.so"
//go:cgo_ldflag "-Wl,-plugin=/go/src/github.com/ccbrown/go-tests/linux/plugin/plugin.so"
//_ _ "./dylib/libfoo.so"
//go:cgo_ldflag "-Wl,-plugin=/go/src/github.com/ccbrown/go-tests/linux/plugin/plugin.so"
//""
extern "C" void _____QDSdylibSlibfooDsoQ_SSgoCcgo_ldflag_QHWlCHpluginESgoSsrcSgithubDcomSccbrownSgoHtestsSlinuxSpluginSpluginDsoQ_SS() {}
