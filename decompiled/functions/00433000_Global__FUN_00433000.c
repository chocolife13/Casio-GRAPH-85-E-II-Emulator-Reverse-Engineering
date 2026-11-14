// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00433000
// entry: 00433000  size: 160


void FUN_00433000(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_10 [16];
  
  uVar2 = FUN_004ab670(local_10,s__TABLE_005be208);
  iVar3 = FUN_0055b770(uVar2);
  if (iVar3 == 0) {
    cVar1 = FUN_00526090(0x31);
    if (cVar1 != '\0') {
      uVar2 = 0x2be;
      goto LAB_0043307e;
    }
  }
  else {
    cVar1 = FUN_00526090(0x22);
    if (cVar1 == '\0') {
      uVar2 = 0x1ca;
      goto LAB_0043307e;
    }
    if (cVar1 == '\x01') {
      uVar2 = 0x12e;
      goto LAB_0043307e;
    }
    if (cVar1 != '\x02') {
      uVar2 = 0x12d;
      goto LAB_0043307e;
    }
  }
  uVar2 = 0x1c9;
LAB_0043307e:
  FUN_0052f6f0(uVar2,param_1);
  FUN_004b6e70(param_1,&DAT_005be9dc);
  FUN_00432fa0(param_1,param_1);
  return;
}

