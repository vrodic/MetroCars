source ./linux_config.sh

#compile
$UE4_ROOT_PATH/Engine/Binaries/DotNET/UnrealBuildTool.exe $PROJECT_NAME Development Linux -project="$SRC_DIR/$PROJECT_NAME.uproject" -editorrecompile -progress -noubtmakefiles -NoHotReloadFromIDE 
