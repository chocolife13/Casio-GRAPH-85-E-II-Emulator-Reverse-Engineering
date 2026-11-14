// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b0410
// entry: 004b0410  size: 478


void FUN_004b0410(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 local_48c;
  undefined2 local_48a;
  undefined2 local_488;
  undefined2 local_486;
  undefined2 local_484;
  undefined4 local_480;
  undefined1 local_47c;
  undefined1 local_47b [99];
  undefined2 local_418 [8];
  undefined4 local_408 [127];
  undefined2 local_20c;
  undefined2 local_20a;
  undefined2 local_208;
  undefined2 local_206;
  undefined2 local_204;
  undefined2 local_202;
  undefined2 local_200;
  undefined2 local_1fe;
  undefined4 local_1fc [127];
  
  local_20c = 0x5c;
  local_20a = 0x5c;
  local_208 = 0x66;
  local_206 = 0x6c;
  local_204 = 0x73;
  local_202 = 0x30;
  local_200 = 0x5c;
  local_1fe = 0;
  puVar4 = local_1fc;
  for (iVar2 = 0x7f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_418[0] = 0x5c;
  local_418[1] = 0x5c;
  local_418[2] = 0x66;
  local_418[3] = 0x6c;
  local_418[4] = 0x73;
  local_418[5] = 0x30;
  local_418[6] = 0x5c;
  local_418[7] = 0;
  puVar4 = local_408;
  for (iVar2 = 0x7f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_48c = 0x2e;
  local_48a = 0x67;
  local_488 = 0x31;
  local_486 = 0x65;
  local_484 = 0;
  local_480 = 10;
  iVar2 = FUN_004afd10(s_Input_File_Kosuu_005c08dc,7,0);
  thunk_FUN_0040add0();
  local_47c = 0x5a;
  FUN_005232d0(1,7);
  iVar3 = 1;
  if (0 < iVar2) {
    while( true ) {
      FUN_004af130(iVar3,local_47b);
      FUN_0042a490(local_418,&local_20c);
      iVar1 = FUN_0042a410(local_418,&local_47c,0xc);
      FUN_0042aac0(local_418 + iVar1);
      iVar1 = FUN_0042a410(local_418,&local_48c);
      FUN_0042a490(local_418 + iVar1);
      iVar1 = FUN_00429e40(local_418,1,&local_480);
      if (iVar1 != 0) break;
      iVar1 = FUN_00429b00(local_418,1,0);
      if (iVar1 < 0) break;
      FUN_00429be0(iVar1);
      iVar3 = iVar3 + 1;
      if (iVar2 < iVar3) {
        return;
      }
    }
    FUN_0052b240(iVar3);
  }
  return;
}

