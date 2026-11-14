// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a27a0
// entry: 004a27a0  size: 260


void FUN_004a27a0(ushort *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ushort *puVar6;
  int local_10;
  char local_c [12];
  
  local_c[0] = '\0';
  local_c[1] = 0;
  local_c[2] = 0;
  local_c[3] = 0;
  local_c[4] = 0;
  local_c[5] = 0;
  local_c[6] = 0;
  local_c[7] = 0;
  local_c[8] = 0;
  FUN_00523740();
  local_10 = 4;
  iVar3 = param_2;
  puVar6 = param_1;
  do {
    puVar6 = puVar6 + 1;
    FUN_0042a3b0(iVar3,&DAT_00584ed8,0x30);
    if (*puVar6 != 0xffff) {
      FUN_0042a3b0(local_c,param_1 + (uint)*puVar6 * 4 + 6,8);
      uVar2 = 0xffffffff;
      pcVar5 = local_c;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_0042a3b0(iVar3 + 1,local_c,~uVar2 - 1);
    }
    iVar3 = iVar3 + 0x30;
    local_10 = local_10 + -1;
    if (local_10 == 0) {
      puVar6 = param_1 + 4;
      iVar4 = 5;
      iVar3 = 4;
      param_2 = param_2 + 0x90;
      do {
        FUN_005232d0(3,iVar4);
        if (*param_1 == *puVar6) {
          FUN_00523490();
        }
        else {
          FUN_00523470(param_2,0x13);
        }
        iVar4 = iVar4 + -1;
        puVar6 = puVar6 + -1;
        param_2 = param_2 + -0x30;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      FUN_004a2670(param_1);
      return;
    }
  } while( true );
}

