// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00432a80
// entry: 00432a80  size: 219


undefined4 FUN_00432a80(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_110 [16];
  char local_100 [256];
  
  FUN_00517360(param_1,local_100);
  if (local_100[0] != '\0') {
    iVar2 = FUN_00517320(param_1);
    if (iVar2 != 0) {
      uVar1 = FUN_005172b0(param_1);
      if ((uVar1 != 0x209) && ((uVar1 < 0x409 || (0x40a < uVar1)))) {
        FUN_00517710(param_1,param_2);
        if (param_2 != 0x108) {
          FUN_005177d0(param_1,0,0x10);
          FUN_005177d0(param_1,0,8);
          uVar3 = FUN_004ab670(local_110,s__TABLE_005be208);
          iVar2 = FUN_0055b770(uVar3);
          if (iVar2 == 0) {
            uVar3 = 0x80;
          }
          else {
            uVar3 = 0x20;
          }
          FUN_005177d0(param_1,0,uVar3);
        }
        return 1;
      }
    }
  }
  return 0;
}

