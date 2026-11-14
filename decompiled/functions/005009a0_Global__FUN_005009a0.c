// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005009a0
// entry: 005009a0  size: 1056


undefined4
FUN_005009a0(undefined4 param_1,char *param_2,byte *param_3,undefined4 *param_4,undefined4 param_5)

{
  char cVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  puVar3 = param_4;
  pbVar2 = param_3;
  iVar6 = 1;
LAB_005009b8:
  do {
    cVar1 = *param_2;
    if (cVar1 != ')') {
      if (cVar1 != ']') {
        if (cVar1 == '}') {
          do {
            iVar6 = FUN_005008e0(puVar3[1],&param_4);
            if (iVar6 == 0) {
              return 2;
            }
            iVar6 = FUN_004fa050(&param_4);
            if (iVar6 == 0) {
              iVar6 = FUN_004fc010(pbVar2,&param_4);
            }
            else {
              FUN_00500880(&param_3,*puVar3);
              if ((char)param_4 == -0x45) {
                iVar6 = FUN_004fd5b0(param_3,pbVar2,puVar3,param_5);
              }
              else {
                iVar6 = FUN_004fbf50(param_3,&param_4,pbVar2);
              }
            }
          } while (iVar6 != 0);
          return 0;
        }
        while (cVar1 != -0x74) {
          iVar6 = FUN_004fc010(pbVar2,param_2);
          if (iVar6 == 0) {
            return 0;
          }
          FUN_004fe330(param_2,param_1);
          if (*param_2 == -0x79) goto LAB_00500d7b;
          iVar4 = FUN_004f9ac0(param_2);
          if (iVar4 != 0) goto LAB_005009b8;
          iVar6 = FUN_004fa2a0(param_2);
          if (iVar6 != 0) {
            return 1;
          }
          cVar1 = *param_2;
        }
        if ((*pbVar2 & 0x60) == 0x20) {
          FUN_004fd9e0(pbVar2);
          uVar5 = FUN_00501f30(pbVar2);
          return uVar5;
        }
        if ((*pbVar2 & 0x80) != 0) {
          uVar5 = FUN_00501ed0(pbVar2);
          return uVar5;
        }
        FUN_004e5640(pbVar2);
        iVar6 = FUN_00500f00(param_1,param_2,&local_18);
        if (iVar6 == 1) {
          FUN_005016d0(local_c);
          FUN_004e6d90(&local_18,local_c,&local_18);
          FUN_004e69c0(pbVar2,&local_18,pbVar2);
          if (0xef < *pbVar2) {
            return 0;
          }
          iVar6 = FUN_00500f00(param_1,param_2,&local_18);
          if (iVar6 != 1) goto LAB_00500cc6;
          FUN_00501690(local_c);
          FUN_004e6d90(&local_18,local_c,&local_18);
          FUN_004e69c0(pbVar2,&local_18,pbVar2);
          if (0xef < *pbVar2) {
            return 0;
          }
          FUN_004fe330(param_2,param_1);
        }
        else {
LAB_00500cc6:
          if (iVar6 == 0) {
            *(undefined4 *)pbVar2 = local_18;
            *(undefined4 *)(pbVar2 + 4) = local_14;
            *(undefined4 *)(pbVar2 + 8) = local_10;
            return 0;
          }
        }
        if (*param_2 != -0x79) {
          iVar4 = FUN_004fa2a0(param_2);
          if (iVar4 != 0) {
            return 1;
          }
          if (*param_2 != -0x74) goto LAB_005009b8;
        }
LAB_00500d7b:
        uVar5 = FUN_00501f30(pbVar2);
        return uVar5;
      }
      while( true ) {
        iVar4 = FUN_005008e0(puVar3[1],&param_4);
        if (iVar4 == 0) {
          return 2;
        }
        iVar4 = FUN_004f9960(&param_4);
        if (iVar4 != 0) break;
        iVar6 = FUN_004fa050(&param_4);
        if (iVar6 == 0) {
          iVar6 = FUN_004fc010(pbVar2,&param_4);
        }
        else {
          FUN_00500880(&param_3,*puVar3);
          if ((char)param_4 == -0x45) {
            iVar6 = FUN_004fd5b0(param_3,pbVar2,puVar3,param_5);
          }
          else {
            iVar6 = FUN_004fbf50(param_3,&param_4,pbVar2);
          }
        }
        if (iVar6 == 0) {
          return 0;
        }
      }
      goto LAB_005009b8;
    }
    while( true ) {
      iVar4 = FUN_005008e0(puVar3[1],&param_4);
      if (iVar4 == 0) goto LAB_00500d7b;
      iVar4 = FUN_004f9ba0(&param_4);
      if (iVar4 != 0) {
        return 2;
      }
      iVar4 = FUN_004f9f10(&param_4);
      if (iVar4 != 0) break;
      iVar6 = FUN_004fa050(&param_4);
      if (iVar6 == 0) {
        iVar6 = FUN_004fc010(pbVar2,&param_4);
      }
      else {
        FUN_00500880(&param_3,*puVar3);
        if ((char)param_4 == -0x45) {
          iVar6 = FUN_004fd5b0(param_3,pbVar2,puVar3,param_5);
        }
        else {
          iVar6 = FUN_004fbf50(param_3,&param_4,pbVar2);
        }
      }
      if (iVar6 == 0) {
        return 0;
      }
    }
    if ((char)param_4 != '(') {
      iVar6 = FUN_004fc010(pbVar2,&param_4);
    }
    if (iVar6 == 0) {
      return 0;
    }
    FUN_004fe330(param_2,param_1);
    if (*param_2 == -0x79) goto LAB_00500d7b;
    iVar4 = FUN_004fa2a0(param_2);
    if (iVar4 != 0) {
      return 1;
    }
  } while( true );
}

