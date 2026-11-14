// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00443be0
// entry: 00443be0  size: 942


void FUN_00443be0(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined2 local_88;
  undefined1 local_86;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  char local_5c [28];
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  
  local_6c = 0x61;
  local_6b = 0x6e;
  local_6a = 0xa1;
  local_69 = 0x58;
  local_68 = 0xa1;
  local_67 = 0x2b;
  local_66 = 0xf7;
  local_65 = 0x85;
  local_64 = 0xf7;
  local_63 = 0x85;
  local_62 = 0xf7;
  local_61 = 0x85;
  local_60 = 0x2b;
  local_5f = 0x61;
  local_5e = 0xd4;
  local_5d = 0;
  local_78 = 0x2b;
  local_77 = 0xf7;
  local_76 = 0x85;
  local_75 = 0xf7;
  local_74 = 0x85;
  local_73 = 0xf7;
  local_72 = 0x85;
  local_71 = 0x2b;
  local_70 = 0x61;
  local_6f = 0;
  local_80 = 0x2b;
  local_7f = 0x61;
  local_7e = 0xa1;
  local_7d = 0x58;
  local_7c = 0;
  FUN_005232d0(1,1);
  local_8c = 0;
  local_8a = 0;
  local_88 = 0;
  local_84 = 0;
  local_86 = 0;
  local_82 = 0;
  cVar4 = (char)param_2;
  if (param_1 == 0x1e) {
    if (param_2 < 4) {
      if (param_2 == 2) {
        uVar2 = 0xffffffff;
        pcVar6 = &DAT_0057f9e8;
        do {
          pcVar7 = pcVar6;
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          pcVar7 = pcVar6 + 1;
          cVar4 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar4 != '\0');
        uVar2 = ~uVar2;
        pcVar6 = pcVar7 + -uVar2;
        pcVar7 = local_5c;
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else if (param_2 == 3) {
        uVar2 = 0xffffffff;
        pcVar6 = &DAT_0057f9f4;
        do {
          pcVar7 = pcVar6;
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          pcVar7 = pcVar6 + 1;
          cVar4 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar4 != '\0');
        uVar2 = ~uVar2;
        pcVar6 = pcVar7 + -uVar2;
        pcVar7 = local_5c;
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
    }
    else {
      cVar1 = (char)(param_2 / 10);
      cVar5 = cVar4 + cVar1 * -10;
      if (cVar1 == '\0') {
        local_8c = (ushort)(byte)(cVar5 + 0x90);
        local_84 = (ushort)(byte)(cVar5 + 0xa0);
      }
      else {
        local_8c = CONCAT11(cVar5 + -0x70,cVar1 + -0x70);
        local_84 = CONCAT11(cVar5 + -0x60,cVar1 + -0x60);
      }
      cVar1 = (char)((param_2 + -1) / 10);
      cVar4 = cVar4 + cVar1 * -10;
      if (cVar1 == '\0') {
        local_88 = (ushort)(byte)(cVar4 + 0x8f);
      }
      else {
        local_88 = CONCAT11(cVar4 + -0x71,cVar1 + -0x70);
      }
      local_40 = 0x61;
      local_3f = 0xa0;
      local_3e = 0x58;
      local_3d = 0;
      FUN_004b6ef0(local_5c,&local_40);
      FUN_004b6e70(local_5c,&local_8c);
      FUN_004b6e70(local_5c,&local_80);
      FUN_004b6e70(local_5c,&local_88);
      FUN_004b6e70(local_5c,&local_78);
      FUN_004b6e70(local_5c,&local_84);
      local_40 = 0x3d;
      local_3f = 0x30;
      local_3e = 0;
      FUN_004b6e70(local_5c,&local_40);
    }
    FUN_00523470(local_5c,0x15);
  }
  else if (param_1 == 0x20) {
    if (6 < param_2) {
      local_8a = 0;
      cVar1 = (char)(param_2 / 10);
      cVar4 = cVar4 + cVar1 * -10;
      if (cVar1 == '\0') {
        local_8c = (ushort)(byte)(cVar4 + 0xa0);
      }
      else {
        local_8c = CONCAT11(cVar4 + -0x60,cVar1 + -0x60);
      }
      FUN_004b6ef0(local_5c,&local_6c);
      FUN_004b6e70(local_5c,&local_8c);
      local_40 = 0x58;
      local_3f = 0;
      FUN_004b6e70(local_5c,&local_40);
      FUN_004b6e70(local_5c,&local_8c);
      local_40 = 0x3d;
      local_3f = 0x62;
      local_3e = 0xd4;
      local_3d = 0;
      FUN_004b6e70(local_5c,&local_40);
      FUN_00523470(local_5c,0x15);
      return;
    }
    uVar2 = 0xffffffff;
    pcVar6 = &UNK_0057f930 + param_2 * 0x1a;
    do {
      pcVar7 = pcVar6;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar6 + 1;
      cVar4 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar4 != '\0');
    uVar2 = ~uVar2;
    pcVar6 = pcVar7 + -uVar2;
    pcVar7 = local_5c;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_00523470(local_5c,0x15);
    return;
  }
  return;
}

