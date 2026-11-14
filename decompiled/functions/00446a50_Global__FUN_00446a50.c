// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00446a50
// entry: 00446a50  size: 299


void FUN_00446a50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38 [24];
  undefined1 local_20 [32];
  
  local_46 = 0xa9;
  local_45 = 0;
  local_44 = 0x20;
  local_43 = 0x20;
  local_42 = 0x20;
  local_41 = 0x20;
  local_40 = 0x20;
  local_3f = 0x20;
  local_3e = 0x20;
  local_3d = 0x20;
  local_3c = 0x20;
  local_3b = 0x20;
  local_3a = 0x20;
  local_39 = 0;
  if (-1 < param_1) {
    iVar2 = 3;
    do {
      iVar1 = FUN_00528ac0(0x22,param_2 + -2 + iVar2,1,local_38);
      if (0xf < iVar1) {
        return;
      }
      FUN_004b1890(local_38,local_20);
      iVar1 = FUN_0055401d(local_20);
      if (iVar1 < 2) {
        if (param_3 == 1) {
          FUN_00523a20(0x15,iVar2,&local_44,0x10);
        }
        else {
          FUN_00523a20(0xd,iVar2,&local_44,0x10);
        }
      }
      else {
        FUN_0055c2fe(iVar1,local_20,10);
        if (param_3 == 1) {
          FUN_00523a20(0x15,iVar2,&local_46,0x10);
          uVar3 = 0x16;
        }
        else {
          FUN_00523a20(0xd,iVar2,&local_46,0x10);
          uVar3 = 0xe;
        }
        FUN_00523a20(uVar3,iVar2,local_20,0x10);
      }
      iVar1 = iVar2 + -2;
      iVar2 = iVar2 + 1;
    } while (iVar1 <= param_1);
  }
  return;
}

