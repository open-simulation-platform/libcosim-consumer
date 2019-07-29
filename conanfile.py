
from conans import ConanFile, CMake


class CseconsumerConan(ConanFile):

    settings = "os", "compiler", "build_type", "arch"
    generators = "cmake"

    requires = (
        "cse-core/0.4.0@markaren/testing"
    )
    
    default_options = (
        "cse-core:revision=markaren/testing",
        "cse-core:build_apidoc=False"
    )

    def imports(self):
        self.copy("*.dll", dst="bin", keep_path=False)
        self.copy("*.pdb", dst="bin", keep_path=False)
