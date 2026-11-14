// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00436b10
// entry: 00436b10  size: 274


int FUN_00436b10(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  iVar3 = 1;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      FUN_00528ac0(*param_1,param_4,iVar3,local_30);
      if ((param_2 == 0xc) || (FUN_00528ac0(*param_1,param_5,iVar3,local_18), 0xb < param_2)) {
        if (param_2 < 0xe) {
          cVar1 = FUN_00526090(0x2a);
          uVar2 = FUN_004e0c40(param_3,local_30,local_30,(int)cVar1);
          iVar4 = FUN_004e4020(uVar2);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = 0;
          if (param_2 == 0xd) {
            cVar1 = FUN_00526090(0x2a);
            uVar2 = FUN_004e0740(local_18,local_30,local_30,(int)cVar1);
            iVar4 = FUN_004e4020(uVar2);
            goto joined_r0x00436c0a;
          }
        }
        else if (param_2 == 0xe) {
          cVar1 = FUN_00526090(0x2a);
          uVar2 = FUN_004e0740(local_18,local_30,local_30,(int)cVar1);
          iVar4 = FUN_004e4020(uVar2);
joined_r0x00436c0a:
          if (iVar4 != 0) {
            return iVar4;
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)(param_1 + 0x18));
  }
  return iVar4;
}

