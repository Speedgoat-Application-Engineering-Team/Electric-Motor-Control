@echo off

call "%SLREALTIME_QNX_SP_ROOT%\qnx700\qnxsdp-env.bat"

cd .

chcp 1252

if "%1"=="" (make  -f FieldOrientedController_RCP.mk all) else (make  -f FieldOrientedController_RCP.mk %1)
@if errorlevel 1 goto error_exit

exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1