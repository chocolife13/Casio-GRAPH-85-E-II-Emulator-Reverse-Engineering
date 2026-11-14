// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052a9c0
// entry: 0052a9c0  size: 276


void FUN_0052a9c0(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  char local_99;
  char local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_68 [52];
  undefined1 local_34 [52];
  
  iVar7 = 2;
  do {
    FUN_005232d0(1,iVar7);
    iVar1 = param_1 + -2 + iVar7;
    cVar6 = (char)iVar7;
    cVar4 = (char)param_1;
    if (iVar1 < 1) {
LAB_0052aa38:
      local_9a = 0xd1;
      local_98 = cVar6 + cVar4 + -0x3c;
LAB_0052aa55:
      local_99 = -0x1b;
      local_9b = 0xe5;
      local_9c = 0x66;
      local_97 = 0x3a;
      local_96 = 0;
    }
    else {
      if (9 < iVar1) {
        if (iVar1 != 0x14) goto LAB_0052aa38;
        local_9a = 0xd2;
        local_98 = cVar6 + cVar4 + -0x46;
        goto LAB_0052aa55;
      }
      local_9c = 0x20;
      local_9b = 0x66;
      local_9a = 0xe5;
      local_99 = cVar6 + cVar4 + -0x32;
      local_98 = ':';
      local_97 = 0;
    }
    puVar3 = (undefined1 *)FUN_004b7ca0(CONCAT31((int3)((uint)iVar1 >> 8),cVar6 + cVar4 + -2));
    local_68[0] = 0;
    if (puVar3 != (undefined1 *)0x0) {
      iVar1 = 0;
      do {
        iVar5 = iVar1;
        uVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        local_68[iVar5] = uVar2;
        iVar1 = iVar5 + 1;
      } while (iVar5 + 1 < 0x28);
      local_68[iVar5 + 1] = 0;
      local_68[iVar5 + 2] = 0;
    }
    FUN_004b7b40(local_68,local_34,0x11);
    FUN_004b6e70(&local_9c,local_34);
    FUN_00523470(&local_9c,0x15);
    iVar7 = iVar7 + 1;
    if (7 < iVar7) {
      return;
    }
  } while( true );
}

