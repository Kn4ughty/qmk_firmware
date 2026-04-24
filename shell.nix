{ pkgs ? import <nixpkgs> {} }:
pkgs.mkShell {
    packages = with pkgs; [
      python314Packages.hid
      qmk
	  qmk-udev-rules
      dos2unix
    ];
}

