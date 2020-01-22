@echo off

:: Add aliases
set DIR=%~dp0
DOSKEY b=python "%DIR%\tools\build_current_directory.py"
