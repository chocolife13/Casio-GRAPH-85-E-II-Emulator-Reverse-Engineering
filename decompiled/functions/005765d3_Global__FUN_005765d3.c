// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005765d3
// entry: 005765d3  size: 35


bool FUN_005765d3(void)

{
  UINT CodePage;
  _cpinfo *lpCPInfo;
  _cpinfo local_18;
  
  lpCPInfo = &local_18;
  CodePage = GetOEMCP();
  GetCPInfo(CodePage,lpCPInfo);
  return 1 < local_18.MaxCharSize;
}

