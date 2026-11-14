// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043e290
// entry: 0043e290  size: 169


void FUN_0043e290(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  do {
    uVar1 = FUN_00515090(param_1,param_2,param_3,param_4);
    switch(uVar1) {
    case 0xfffffff5:
    case 0xffffffff:
      goto switchD_0043e2c0_caseD_fffffff5;
    case 0xfffffffe:
    case 0:
      uVar1 = FUN_0043ede0(param_3,param_5,param_2,param_4);
      switch(uVar1) {
      case 0:
        if ((((param_4 == 0) || (param_1 == 0)) || (param_1 == 3)) || (param_1 == 5)) {
          param_1 = 3;
        }
        else {
          param_1 = 2;
        }
        break;
      case 0xfffffff5:
        if (((param_4 == 0) || (param_1 == 0)) || ((param_1 == 3 || (param_1 == 5)))) {
          param_1 = 5;
        }
        else {
          param_1 = 4;
        }
        break;
      case 0xfffffffe:
      case 0xffffffff:
switchD_0043e2c0_caseD_fffffff5:
        return;
      }
    }
  } while( true );
}

