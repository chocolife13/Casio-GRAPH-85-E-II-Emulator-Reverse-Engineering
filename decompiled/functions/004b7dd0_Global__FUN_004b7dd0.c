// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b7dd0
// entry: 004b7dd0  size: 462


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_004b7dd0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined1 local_10;
  char local_c [4];
  char local_8 [4];
  char local_4;
  
  iVar5 = param_1;
  local_14 = _DAT_005bdca0;
  local_c = (char  [4])s_NAT_CLIP_005bdc94._0_4_;
  local_8 = (char  [4])s_NAT_CLIP_005bdc94._4_4_;
  local_10 = DAT_005bdca4;
  local_4 = s_NAT_CLIP_005bdc94[8];
  local_20 = CONCAT22(local_20._2_2_,0x30);
  local_18 = param_1;
  cVar2 = FUN_004ad2a0(10,&local_14,&param_1);
  if (cVar2 == '\0') {
    param_1 = param_1 + 0x14;
  }
  cVar3 = FUN_004ad2a0(10,local_c,&local_1c);
  iVar1 = param_2;
  if (cVar3 == '\0') {
    local_1c = local_1c + 0x14;
  }
  iVar4 = FUN_004adb30(((param_2 + 4U & 0xfffffffc) * 2 + 0x28) - (param_1 + local_1c));
  if (iVar4 == 0) {
    return '0';
  }
  if (cVar2 == '\0') {
    FUN_004ac5a0(10,&local_14);
  }
  if (cVar3 == '\0') {
    FUN_004ac5a0(10,local_c);
  }
  cVar2 = FUN_004aba60(10,&local_14,iVar1 + 1,iVar5);
  if (cVar2 == '\0') {
    FUN_004ac2f0(1,&DAT_005cd010,iVar1);
    cVar2 = FUN_004aba60(10,local_c,iVar1 + 1,iVar5);
    if (cVar2 != '\0') {
      FUN_004ac5a0(10,&local_14);
      return cVar2;
    }
    FUN_004ac2f0(1,&DAT_005cd010,iVar1);
    if (iVar1 != 0) {
      do {
        iVar4 = iVar1 + -1;
        FUN_004fe330(&local_20,&local_18);
        iVar5 = FUN_004b7370(local_20);
        if (iVar5 != 0) {
          iVar4 = iVar1 + -2;
        }
        switch(local_20 & 0xff) {
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x84:
        case 0x94:
        case 0xa4:
        case 0xb4:
          FUN_004ac5a0(10,local_c);
          goto LAB_004b7f94;
        default:
          iVar1 = iVar4;
          if (iVar4 == 0) {
            return '\0';
          }
        }
      } while( true );
    }
LAB_004b7f94:
    cVar2 = '\0';
  }
  return cVar2;
}

