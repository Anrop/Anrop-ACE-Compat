# Anrop ACE Compat

Contains additional ACE compatability configs

## Build locally

Make sure pboproject and any dependencies are installed from https://armaservices.maverick-applications.com/Products/MikerosDosTools/FileBrowserFree

Double click build.bat to generate pbo files in @anrop_ace_compat.
Check source/temp for build logs.

## Build on Jenkins

Project uses Jenkinsfile to define build steps.
Add the repository or organization to Jenkins as a pipeline job and it should pick it up automatically.

It requires a node with the label "mikero" and pboproject must be available in PATH
