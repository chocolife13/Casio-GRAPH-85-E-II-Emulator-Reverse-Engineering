// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00527570
// entry: 00527570  size: 274


void FUN_00527570(uint param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0052fbc0(param_1,param_2,local_1c);
  cVar3 = FUN_004ad2a0(5,local_1c,&param_2);
  if (cVar3 == '\0') {
    cVar3 = FUN_004ad3f0(1,0x10,&local_10);
    if (cVar3 == '\0') {
      FUN_00527400(local_10,local_c,local_8,local_4,&param_1);
      iVar2 = param_4;
      uVar1 = param_3;
      if (param_1 < param_3) {
        FUN_00529a30(0x13);
        return;
      }
      cVar3 = FUN_004ad3f0(param_3 * 0xc + 5,0xc,param_4);
      if (cVar3 == '\0') {
        param_2 = (param_2 - 0x10) / 0xc;
        if (param_1 != param_2) {
          FUN_004ad3f0((param_1 + uVar1) * 0xc + 5,0xc,iVar2 + 0xc);
        }
      }
    }
  }
  FUN_00529a30(cVar3);
  return;
}

