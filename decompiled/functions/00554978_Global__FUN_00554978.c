// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00554978
// entry: 00554978  size: 200


undefined4 FUN_00554978(HANDLE param_1,uint *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  uint uVar4;
  _WIN32_FIND_DATAA local_144;
  
  BVar1 = FindNextFileA(param_1,&local_144);
  if (BVar1 != 0) {
    *param_2 = -(uint)(local_144.dwFileAttributes != 0x80) & local_144.dwFileAttributes;
    uVar4 = ___timet_from_ft(&local_144.ftCreationTime);
    param_2[1] = uVar4;
    uVar4 = ___timet_from_ft(&local_144.ftLastAccessTime);
    param_2[2] = uVar4;
    uVar4 = ___timet_from_ft(&local_144.ftLastWriteTime);
    param_2[3] = uVar4;
    param_2[4] = local_144.nFileSizeLow;
    FUN_0055a500(param_2 + 5,local_144.cFileName);
    return 0;
  }
  DVar2 = GetLastError();
  if (DVar2 < 2) {
LAB_005549b2:
    puVar3 = (undefined4 *)FUN_005542c1();
    *puVar3 = 0x16;
  }
  else {
    if (3 < DVar2) {
      if (DVar2 == 8) {
        puVar3 = (undefined4 *)FUN_005542c1();
        *puVar3 = 0xc;
        return 0xffffffff;
      }
      if (DVar2 != 0x12) goto LAB_005549b2;
    }
    puVar3 = (undefined4 *)FUN_005542c1();
    *puVar3 = 2;
  }
  return 0xffffffff;
}

