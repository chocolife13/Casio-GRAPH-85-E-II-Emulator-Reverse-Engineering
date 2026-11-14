// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005282e0
// entry: 005282e0  size: 412


void FUN_005282e0(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0052fbc0(param_1,param_2,local_1c);
  bVar1 = false;
  cVar2 = FUN_004ad2a0(5,local_1c,&param_1);
  if ((cVar2 == '\0') && (cVar2 = FUN_004ad3f0(1,0x10,&local_10), cVar2 == '\0')) {
    FUN_00527400(local_10,local_c,local_8,local_4,&param_2);
    if ((param_2 < param_3) || (uVar4 = param_3, param_3 == 0)) {
      uVar4 = param_2;
    }
    if (param_2 != 1) {
      if (param_2 * 0xc < param_1 - 0x10U) {
        uVar3 = FUN_00527360(param_2);
        if (uVar3 == uVar4) {
          cVar2 = FUN_004acb90(param_2 * 0xc,param_2 * 0xc + 0x10);
        }
        else {
          cVar2 = FUN_004acb90(0xc,(param_2 + uVar4) * 0xc + 4);
        }
        if (cVar2 != '\0') goto LAB_0052846c;
        bVar1 = true;
      }
      cVar2 = FUN_004acb90(0xc,uVar4 * 0xc + 4);
      if (cVar2 == '\0') {
        FUN_00527410(&local_10,param_2 - 1,0);
        cVar2 = FUN_004ac2f0(0x10,&local_10,0);
        if (((cVar2 == '\0') || (cVar2 == '\x01')) || (cVar2 == '\x02')) {
          FUN_00529a30(0);
          return;
        }
      }
      else if (!bVar1) goto LAB_0052846c;
    }
    FUN_004ac5a0(5,local_1c);
  }
LAB_0052846c:
  FUN_00529a30(cVar2);
  return;
}

