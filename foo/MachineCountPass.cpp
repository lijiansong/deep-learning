//codegen example

#define DEBUG_TYPE "machinecount"
#include "Sparc.h"
#include "llvm/Pass.h"
#include "llvm/CodeGen/MachineBasicBlock.h"
#include "llvm/CodeGen/MachineFunction.h"
#include "llvm/CodeGen/MachineFunctionPass.h"
#include "llvm/Support/raw_ostream.h"
using namespace llvm;

namespace {
  class MachineCountPass : public MachineFunctionPass {
  public:
    static char ID;
    MachineCountPass() : MachineFunctionPass(ID) {}
    
    virtual bool runOnMachineFunction(MachineFunction &MF) {
      unsigned num_instr = 0;
      for (MachineFunction::const_iterator I = MF.begin(), E = MF.end();
           I != E; ++I) {
        for (MachineBasicBlock::const_iterator BBI = I->begin(),
               BBE = I->end(); BBI != BBE; ++BBI) {
          ++num_instr;
        }
      }
      errs() << "mcount --- " << MF.getName() << " has "
             << num_instr << " instructions.\n";
      return false;
    }
  };
}

FunctionPass *llvm::createMyCustomMachinePass() {
  return new MachineCountPass();
}

char MachineCountPass::ID = 0;
static RegisterPass<MachineCountPass> X("machinecount", "Machine Count Pass");

