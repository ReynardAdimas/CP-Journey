Param($Name)
if (-Not (Test-Path -PathType Container ./.out)) {
    New-Item -ItemType Container ./.out | Out-Null
}
if (Test-Path ./.out/out.exe) {
    Remove-Item ./.out/out.exe
}
Write-Output "Compiling $Name"
g++ -Wall -o ./.out/out.exe "$Name.cpp"
if (Test-Path ./.out/out.exe) {
    Write-Output "Running executable"
    ./.out/out.exe
} else {
    Write-Output "Compile failed"
}