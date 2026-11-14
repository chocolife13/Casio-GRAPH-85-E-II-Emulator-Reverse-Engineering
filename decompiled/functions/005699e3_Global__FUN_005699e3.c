// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005699e3
// entry: 005699e3  size: 178


undefined4 FUN_005699e3(LPCSTR param_1,int *param_2)

{
  int iVar1;
  HANDLE hFindFile;
  int *piVar2;
  _WIN32_FIND_DATAA local_144;
  
  iVar1 = FUN_00569123((undefined1 *)((int)param_2 + 0x12),param_1);
  if (iVar1 == 0) {
    *(undefined1 *)((int)param_2 + 0x12) = 0;
  }
  else {
    hFindFile = FindFirstFileA(param_1,&local_144);
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
      *(byte *)(param_2 + 4) = (byte)local_144.dwFileAttributes & 0x7f;
      param_2[3] = local_144.nFileSizeLow;
      piVar2 = (int *)FUN_00560c81(&local_144.ftCreationTime,0xffffffff);
      *param_2 = *piVar2;
      piVar2 = (int *)FUN_00560c81(&local_144.ftLastAccessTime,0xffffffff);
      param_2[2] = *piVar2;
      piVar2 = (int *)FUN_00560c81(&local_144.ftLastWriteTime,0xffffffff);
      iVar1 = *piVar2;
      param_2[1] = iVar1;
      if (*param_2 == 0) {
        *param_2 = iVar1;
      }
      if (param_2[2] == 0) {
        param_2[2] = param_2[1];
      }
      return 1;
    }
  }
  return 0;
}

