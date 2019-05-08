#pragma once

#include "antlr4-runtime.h"
#include "tinyrexxParser.h"
#include "tinyrexxBaseListener.h"

/**
 * This class defines a concrete listener for a parse tree produced by tinyrexxParser.
 */
class  MyListener : public tinyrexxBaseListener {
private:
  int indent = 0;
  std::set<std::string> vars;

public:
  MyListener(const std::set<std::string> &ids);

  void enterProgram(tinyrexxParser::ProgramContext * ctx);
  void exitProgram(tinyrexxParser::ProgramContext * ctx);

  void enterAssign(tinyrexxParser::AssignContext * ctx);
  void exitAssign(tinyrexxParser::AssignContext * ctx);

  void enterPrint(tinyrexxParser::PrintContext * ctx);
  void exitPrint(tinyrexxParser::PrintContext * ctx);

  void exitInput(tinyrexxParser::InputContext * ctx);

  void enterW_loop(tinyrexxParser::W_loopContext * ctx);
  void exitW_loop(tinyrexxParser::W_loopContext * ctx);

  void enterTest(tinyrexxParser::TestContext * ctx);
  void exitTest(tinyrexxParser::TestContext * ctx);

  void enterA_expr(tinyrexxParser::A_exprContext * ctx);
  void exitA_expr(tinyrexxParser::A_exprContext * ctx);

  void exitA_op(tinyrexxParser::A_opContext * ctx);
  void exitR_op(tinyrexxParser::R_opContext * ctx);

  void enterForeach(tinyrexxParser::ForeachContext * ctx);
  void exitForeach(tinyrexxParser::ForeachContext * ctx);

  void enterRange(tinyrexxParser::RangeContext * ctx);
  void exitRange(tinyrexxParser::RangeContext * ctx);

  void enterTto(tinyrexxParser::TtoContext * ctx);

  void enterCondif(tinyrexxParser::CondifContext * ctx);
  void exitCondif(tinyrexxParser::CondifContext * ctx);

  void enterCondelse(tinyrexxParser::CondelseContext * ctx);
  void exitCondelse(tinyrexxParser::CondelseContext * ctx);

  void exitC_op(tinyrexxParser::C_opContext * ctx);

  void enterTestt(tinyrexxParser::TesttContext * ctx);
  void exitTestt(tinyrexxParser::TesttContext * ctx);

  void enterA_expr_(tinyrexxParser::A_expr_Context * ctx);
  void exitA_expr_(tinyrexxParser::A_expr_Context * ctx);

};

