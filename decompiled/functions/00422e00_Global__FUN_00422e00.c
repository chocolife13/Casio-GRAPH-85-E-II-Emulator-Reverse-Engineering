// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00422e00
// entry: 00422e00  size: 389


int FUN_00422e00(undefined4 param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  char local_50 [18];
  uint local_3e;
  char local_38 [17];
  uint local_27;
  undefined1 local_20 [8];
  char local_18;
  undefined2 local_2;
  
  uVar4 = 0;
  if ((param_2 != 0) && (iVar1 = FUN_00429d30(param_1,local_20,0x20,0), -1 < iVar1)) {
    FUN_0041f800(local_20,0x20);
    iVar1 = FUN_0041f690(local_20);
    if ((iVar1 != 0) && (local_18 == '1')) {
      if (param_2 == 0xffff) {
        param_2 = CONCAT11((char)local_2,(char)((ushort)local_2 >> 8));
      }
      iVar1 = 0x20;
      iVar2 = FUN_00429cd0(param_1,0x20);
      if (-1 < iVar2) {
        do {
          if ((uint)param_2 <= uVar4 + 1) {
            return iVar1;
          }
          iVar2 = FUN_00429d30(param_1,local_50,0x14,iVar1);
          if (iVar2 < 0) {
            return -1;
          }
          if ((local_50[0] == -1) || (iVar2 == 0)) {
LAB_00422f71:
            FUN_00429cd0(param_1,iVar1);
            return iVar1;
          }
          iVar2 = (local_3e & 0xff) * 0x100 + (local_3e >> 8 & 0xff);
          iVar1 = iVar1 + 0x14;
          if (iVar2 != 0) {
            do {
              uVar4 = uVar4 + 1;
              if (param_2 <= uVar4) {
                return iVar1;
              }
              iVar3 = FUN_00429d30(param_1,local_38,0x18,iVar1);
              if (iVar3 < 0) {
                return -1;
              }
              if ((local_38[0] == -1) || (iVar3 == 0)) goto LAB_00422f71;
              iVar2 = iVar2 + -1;
              iVar1 = iVar1 + 0x18 +
                      ((local_27 & 0xff0000 | local_27 >> 0x10) >> 8 |
                      (local_27 << 0x10 | local_27 & 0xff00) << 8);
            } while (0 < iVar2);
          }
          iVar2 = FUN_00429cd0(param_1,iVar1);
        } while (-1 < iVar2);
      }
    }
  }
  return -1;
}

