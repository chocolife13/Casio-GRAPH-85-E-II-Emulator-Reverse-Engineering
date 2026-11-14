// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00553c24
// entry: 00553c24  size: 312


void * FUN_00553c24(LPVOID param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  LPVOID pvVar5;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar1 = _malloc(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_00553b50(param_1);
    }
    else {
      do {
        pvVar5 = (LPVOID)0x0;
        if (param_2 < 0xffffffe1) {
          FUN_00558590(9);
          iVar2 = FUN_00558644(param_1);
          if (iVar2 == 0) {
            FUN_005585f1(9);
            if (param_2 == 0) {
              param_2 = 1;
            }
            param_2 = param_2 + 0xf & 0xfffffff0;
            pvVar5 = HeapReAlloc(DAT_005d96bc,0,param_1,param_2);
          }
          else {
            if (DAT_005cc49c < param_2) {
LAB_00553cc3:
              if (param_2 == 0) {
                param_2 = 1;
              }
              param_2 = param_2 + 0xf & 0xfffffff0;
              pvVar5 = HeapAlloc(DAT_005d96bc,0,param_2);
              if (pvVar5 != (LPVOID)0x0) {
                uVar4 = *(int *)((int)param_1 + -4) - 1;
                if (param_2 <= uVar4) {
                  uVar4 = param_2;
                }
                FUN_00555c70(pvVar5,param_1,uVar4);
                FUN_0055866f(iVar2,param_1);
              }
            }
            else {
              iVar3 = FUN_00558e4f(iVar2,param_1,param_2);
              pvVar5 = param_1;
              if (iVar3 == 0) {
                pvVar5 = (LPVOID)FUN_0055899a(param_2);
                if (pvVar5 == (LPVOID)0x0) goto LAB_00553cc3;
                uVar4 = *(int *)((int)param_1 + -4) - 1;
                if (param_2 <= uVar4) {
                  uVar4 = param_2;
                }
                FUN_00555c70(pvVar5,param_1,uVar4);
                FUN_0055866f(iVar2,param_1);
              }
              if (pvVar5 == (LPVOID)0x0) goto LAB_00553cc3;
            }
            FUN_005585f1(9);
          }
          if (pvVar5 != (LPVOID)0x0) {
            return pvVar5;
          }
        }
        if (DAT_005d5448 == 0) {
          return pvVar5;
        }
        iVar2 = FUN_00559145(param_2);
      } while (iVar2 != 0);
    }
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}

