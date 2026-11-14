// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00560737
// entry: 00560737  size: 507


undefined4 FUN_00560737(void)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_ECX;
  char cVar7;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  uVar1 = *(uint *)(extraout_ECX + 0x90);
  uVar2 = uVar1 & 0x80000;
  *(uint *)(unaff_EBP + -0x18) = uVar2;
  pcVar3 = (char *)**(undefined4 **)(unaff_EBP + 0xc);
  cVar7 = ((uVar2 == 0) - 1U & 0xe0) + 0x20;
  if (pcVar3 == *(char **)(extraout_ECX + 0x78)) {
    if ((uVar1 & 0x200) == 0) {
      **(undefined4 **)(unaff_EBP + 0xc) = 0;
      FUN_00567406(*(undefined4 *)(extraout_ECX + 0x78));
      goto LAB_0056091e;
    }
    for (; (*pcVar3 != cVar7 && (*pcVar3 != '\0')); pcVar3 = (char *)FUN_005560f4(pcVar3)) {
    }
    pcVar3 = (char *)FUN_005560f4(pcVar3);
    if (*pcVar3 == '\0') {
      **(undefined4 **)(unaff_EBP + 0xc) = 0;
      FUN_00567406(*(undefined4 *)(extraout_ECX + 0x78));
      goto LAB_0056091e;
    }
  }
  FUN_00567406(*(undefined4 *)(extraout_ECX + 0x78));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    for (pcVar4 = *(char **)(extraout_ECX + 0x78); *pcVar4 != cVar7;
        pcVar4 = (char *)FUN_005560f4(pcVar4)) {
    }
    uVar5 = FUN_00560ded(unaff_EBP + -0x20,(int)pcVar4 - *(int *)(extraout_ECX + 0x78));
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00567485(uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00567398();
  }
  FUN_00567406(pcVar3);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  for (pcVar4 = pcVar3; (*pcVar4 != cVar7 && (*pcVar4 != '\0'));
      pcVar4 = (char *)FUN_005560f4(pcVar4)) {
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    if (*pcVar4 != '\0') {
      uVar5 = FUN_00560ded(unaff_EBP + -0x20,(int)pcVar4 - (int)pcVar3);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00567485(uVar5);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00567398();
      goto LAB_00560873;
    }
    **(undefined4 **)(unaff_EBP + 0xc) = 0;
  }
  else {
LAB_00560873:
    pcVar3 = (char *)FUN_005560f4(pcVar4);
    **(uint **)(unaff_EBP + 0xc) = -(uint)(*pcVar3 != '\0') & (uint)pcVar3;
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) == 0) {
LAB_005608d3:
    uVar5 = FUN_00560d0f(unaff_EBP + 0xc,unaff_EBP + -0x10,0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_0056753a(*(undefined4 *)(unaff_EBP + 8),uVar5,unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00567398();
  }
  else {
    iVar6 = FUN_00556082(*(int *)(unaff_EBP + -0x10),0x5c);
    if (iVar6 == 0) {
      iVar6 = FUN_00556082(*(undefined4 *)(unaff_EBP + -0x10),0x2f);
      if (iVar6 == 0) goto LAB_005608d3;
    }
    if (iVar6 - *(int *)(unaff_EBP + -0x10) != *(int *)(*(int *)(unaff_EBP + -0x10) + -8) + -1)
    goto LAB_005608d3;
    FUN_0056753a(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x10,unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00567398();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
LAB_0056091e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}

