{ pkgs ? import <nixpkgs> {} }:
pkgs.stdenv.mkDerivation {
  name = "ArduPilot-shell";
  buildInputs = with pkgs; [

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
  '';

}
