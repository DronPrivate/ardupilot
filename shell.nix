{ pkgs ? import <nixpkgs> {
  overlays = [
    (self: super: {
      python3 = super.python3.override {
        packageOverrides = pself: psuper: {
          empy = psuper.buildPythonPackage rec {
            pname = "empy";
            version = "3.3.4";
            src = super.fetchPypi {
              inherit pname version;
              sha256 = "c6xJeFtgFHnfTqGKfHm8EwSop8NMArlHLPEgauiPAbM=";
            };
          };
        };
      };
    })
  ];
  }
}:
pkgs.stdenv.mkDerivation {
  name = "ArduPilot-shell";
  buildInputs = with pkgs; [

    gcc-arm-embedded
    mavproxy

    (python3.withPackages
      (ps: with ps; [
        argparse
        dronecan
        empy
        future
        lxml
        mavproxy
        matplotlib
        pexpect
        pyparsing
        pyserial
        pymavlink
        setuptools
      ])
    )
  ];

  shellHook = ''
    echo ""
    echo "ArduPilot shell"
    unset CC
    unset CXX
    unset NM
    unset OBJCOPY
  '';

}
