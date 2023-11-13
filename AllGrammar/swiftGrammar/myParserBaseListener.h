
// Generated from myParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "myParserListener.h"


/**
 * This class provides an empty implementation of myParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  myParserBaseListener : public myParserListener {
public:

  virtual void enterTop_level(myParser::Top_levelContext * /*ctx*/) override { }
  virtual void exitTop_level(myParser::Top_levelContext * /*ctx*/) override { }

  virtual void enterStatement(myParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(myParser::StatementContext * /*ctx*/) override { }

  virtual void enterStatements(myParser::StatementsContext * /*ctx*/) override { }
  virtual void exitStatements(myParser::StatementsContext * /*ctx*/) override { }

  virtual void enterLoop_statement(myParser::Loop_statementContext * /*ctx*/) override { }
  virtual void exitLoop_statement(myParser::Loop_statementContext * /*ctx*/) override { }

  virtual void enterFor_in_statement(myParser::For_in_statementContext * /*ctx*/) override { }
  virtual void exitFor_in_statement(myParser::For_in_statementContext * /*ctx*/) override { }

  virtual void enterWhile_statement(myParser::While_statementContext * /*ctx*/) override { }
  virtual void exitWhile_statement(myParser::While_statementContext * /*ctx*/) override { }

  virtual void enterCondition_list(myParser::Condition_listContext * /*ctx*/) override { }
  virtual void exitCondition_list(myParser::Condition_listContext * /*ctx*/) override { }

  virtual void enterCondition(myParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(myParser::ConditionContext * /*ctx*/) override { }

  virtual void enterCase_condition(myParser::Case_conditionContext * /*ctx*/) override { }
  virtual void exitCase_condition(myParser::Case_conditionContext * /*ctx*/) override { }

  virtual void enterOptional_binding_condition(myParser::Optional_binding_conditionContext * /*ctx*/) override { }
  virtual void exitOptional_binding_condition(myParser::Optional_binding_conditionContext * /*ctx*/) override { }

  virtual void enterRepeat_while_statement(myParser::Repeat_while_statementContext * /*ctx*/) override { }
  virtual void exitRepeat_while_statement(myParser::Repeat_while_statementContext * /*ctx*/) override { }

  virtual void enterBranch_statement(myParser::Branch_statementContext * /*ctx*/) override { }
  virtual void exitBranch_statement(myParser::Branch_statementContext * /*ctx*/) override { }

  virtual void enterIf_statement(myParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(myParser::If_statementContext * /*ctx*/) override { }

  virtual void enterElse_clause(myParser::Else_clauseContext * /*ctx*/) override { }
  virtual void exitElse_clause(myParser::Else_clauseContext * /*ctx*/) override { }

  virtual void enterGuard_statement(myParser::Guard_statementContext * /*ctx*/) override { }
  virtual void exitGuard_statement(myParser::Guard_statementContext * /*ctx*/) override { }

  virtual void enterSwitch_statement(myParser::Switch_statementContext * /*ctx*/) override { }
  virtual void exitSwitch_statement(myParser::Switch_statementContext * /*ctx*/) override { }

  virtual void enterSwitch_cases(myParser::Switch_casesContext * /*ctx*/) override { }
  virtual void exitSwitch_cases(myParser::Switch_casesContext * /*ctx*/) override { }

  virtual void enterSwitch_case(myParser::Switch_caseContext * /*ctx*/) override { }
  virtual void exitSwitch_case(myParser::Switch_caseContext * /*ctx*/) override { }

  virtual void enterCase_label(myParser::Case_labelContext * /*ctx*/) override { }
  virtual void exitCase_label(myParser::Case_labelContext * /*ctx*/) override { }

  virtual void enterCase_item_list(myParser::Case_item_listContext * /*ctx*/) override { }
  virtual void exitCase_item_list(myParser::Case_item_listContext * /*ctx*/) override { }

  virtual void enterDefault_label(myParser::Default_labelContext * /*ctx*/) override { }
  virtual void exitDefault_label(myParser::Default_labelContext * /*ctx*/) override { }

  virtual void enterWhere_clause(myParser::Where_clauseContext * /*ctx*/) override { }
  virtual void exitWhere_clause(myParser::Where_clauseContext * /*ctx*/) override { }

  virtual void enterWhere_expression(myParser::Where_expressionContext * /*ctx*/) override { }
  virtual void exitWhere_expression(myParser::Where_expressionContext * /*ctx*/) override { }

  virtual void enterConditional_switch_case(myParser::Conditional_switch_caseContext * /*ctx*/) override { }
  virtual void exitConditional_switch_case(myParser::Conditional_switch_caseContext * /*ctx*/) override { }

  virtual void enterSwitch_if_directive_clause(myParser::Switch_if_directive_clauseContext * /*ctx*/) override { }
  virtual void exitSwitch_if_directive_clause(myParser::Switch_if_directive_clauseContext * /*ctx*/) override { }

  virtual void enterSwitch_elseif_directive_clauses(myParser::Switch_elseif_directive_clausesContext * /*ctx*/) override { }
  virtual void exitSwitch_elseif_directive_clauses(myParser::Switch_elseif_directive_clausesContext * /*ctx*/) override { }

  virtual void enterSwitch_elseif_directive_clause(myParser::Switch_elseif_directive_clauseContext * /*ctx*/) override { }
  virtual void exitSwitch_elseif_directive_clause(myParser::Switch_elseif_directive_clauseContext * /*ctx*/) override { }

  virtual void enterSwitch_else_directive_clause(myParser::Switch_else_directive_clauseContext * /*ctx*/) override { }
  virtual void exitSwitch_else_directive_clause(myParser::Switch_else_directive_clauseContext * /*ctx*/) override { }

  virtual void enterLabeled_statement(myParser::Labeled_statementContext * /*ctx*/) override { }
  virtual void exitLabeled_statement(myParser::Labeled_statementContext * /*ctx*/) override { }

  virtual void enterStatement_label(myParser::Statement_labelContext * /*ctx*/) override { }
  virtual void exitStatement_label(myParser::Statement_labelContext * /*ctx*/) override { }

  virtual void enterLabel_name(myParser::Label_nameContext * /*ctx*/) override { }
  virtual void exitLabel_name(myParser::Label_nameContext * /*ctx*/) override { }

  virtual void enterControl_transfer_statement(myParser::Control_transfer_statementContext * /*ctx*/) override { }
  virtual void exitControl_transfer_statement(myParser::Control_transfer_statementContext * /*ctx*/) override { }

  virtual void enterBreak_statement(myParser::Break_statementContext * /*ctx*/) override { }
  virtual void exitBreak_statement(myParser::Break_statementContext * /*ctx*/) override { }

  virtual void enterContinue_statement(myParser::Continue_statementContext * /*ctx*/) override { }
  virtual void exitContinue_statement(myParser::Continue_statementContext * /*ctx*/) override { }

  virtual void enterFallthrough_statement(myParser::Fallthrough_statementContext * /*ctx*/) override { }
  virtual void exitFallthrough_statement(myParser::Fallthrough_statementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(myParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(myParser::Return_statementContext * /*ctx*/) override { }

  virtual void enterThrow_statement(myParser::Throw_statementContext * /*ctx*/) override { }
  virtual void exitThrow_statement(myParser::Throw_statementContext * /*ctx*/) override { }

  virtual void enterDefer_statement(myParser::Defer_statementContext * /*ctx*/) override { }
  virtual void exitDefer_statement(myParser::Defer_statementContext * /*ctx*/) override { }

  virtual void enterDo_statement(myParser::Do_statementContext * /*ctx*/) override { }
  virtual void exitDo_statement(myParser::Do_statementContext * /*ctx*/) override { }

  virtual void enterCatch_clauses(myParser::Catch_clausesContext * /*ctx*/) override { }
  virtual void exitCatch_clauses(myParser::Catch_clausesContext * /*ctx*/) override { }

  virtual void enterCatch_clause(myParser::Catch_clauseContext * /*ctx*/) override { }
  virtual void exitCatch_clause(myParser::Catch_clauseContext * /*ctx*/) override { }

  virtual void enterCatch_pattern_list(myParser::Catch_pattern_listContext * /*ctx*/) override { }
  virtual void exitCatch_pattern_list(myParser::Catch_pattern_listContext * /*ctx*/) override { }

  virtual void enterCatch_pattern(myParser::Catch_patternContext * /*ctx*/) override { }
  virtual void exitCatch_pattern(myParser::Catch_patternContext * /*ctx*/) override { }

  virtual void enterCompiler_control_statement(myParser::Compiler_control_statementContext * /*ctx*/) override { }
  virtual void exitCompiler_control_statement(myParser::Compiler_control_statementContext * /*ctx*/) override { }

  virtual void enterConditional_compilation_block(myParser::Conditional_compilation_blockContext * /*ctx*/) override { }
  virtual void exitConditional_compilation_block(myParser::Conditional_compilation_blockContext * /*ctx*/) override { }

  virtual void enterIf_directive_clause(myParser::If_directive_clauseContext * /*ctx*/) override { }
  virtual void exitIf_directive_clause(myParser::If_directive_clauseContext * /*ctx*/) override { }

  virtual void enterElseif_directive_clauses(myParser::Elseif_directive_clausesContext * /*ctx*/) override { }
  virtual void exitElseif_directive_clauses(myParser::Elseif_directive_clausesContext * /*ctx*/) override { }

  virtual void enterElseif_directive_clause(myParser::Elseif_directive_clauseContext * /*ctx*/) override { }
  virtual void exitElseif_directive_clause(myParser::Elseif_directive_clauseContext * /*ctx*/) override { }

  virtual void enterElse_directive_clause(myParser::Else_directive_clauseContext * /*ctx*/) override { }
  virtual void exitElse_directive_clause(myParser::Else_directive_clauseContext * /*ctx*/) override { }

  virtual void enterCompilation_condition(myParser::Compilation_conditionContext * /*ctx*/) override { }
  virtual void exitCompilation_condition(myParser::Compilation_conditionContext * /*ctx*/) override { }

  virtual void enterPlatform_condition(myParser::Platform_conditionContext * /*ctx*/) override { }
  virtual void exitPlatform_condition(myParser::Platform_conditionContext * /*ctx*/) override { }

  virtual void enterSwift_version(myParser::Swift_versionContext * /*ctx*/) override { }
  virtual void exitSwift_version(myParser::Swift_versionContext * /*ctx*/) override { }

  virtual void enterSwift_version_continuation(myParser::Swift_version_continuationContext * /*ctx*/) override { }
  virtual void exitSwift_version_continuation(myParser::Swift_version_continuationContext * /*ctx*/) override { }

  virtual void enterOperating_system(myParser::Operating_systemContext * /*ctx*/) override { }
  virtual void exitOperating_system(myParser::Operating_systemContext * /*ctx*/) override { }

  virtual void enterArchitecture(myParser::ArchitectureContext * /*ctx*/) override { }
  virtual void exitArchitecture(myParser::ArchitectureContext * /*ctx*/) override { }

  virtual void enterModule_name(myParser::Module_nameContext * /*ctx*/) override { }
  virtual void exitModule_name(myParser::Module_nameContext * /*ctx*/) override { }

  virtual void enterEnvironment(myParser::EnvironmentContext * /*ctx*/) override { }
  virtual void exitEnvironment(myParser::EnvironmentContext * /*ctx*/) override { }

  virtual void enterLine_control_statement(myParser::Line_control_statementContext * /*ctx*/) override { }
  virtual void exitLine_control_statement(myParser::Line_control_statementContext * /*ctx*/) override { }

  virtual void enterLine_number(myParser::Line_numberContext * /*ctx*/) override { }
  virtual void exitLine_number(myParser::Line_numberContext * /*ctx*/) override { }

  virtual void enterFile_name(myParser::File_nameContext * /*ctx*/) override { }
  virtual void exitFile_name(myParser::File_nameContext * /*ctx*/) override { }

  virtual void enterDiagnostic_statement(myParser::Diagnostic_statementContext * /*ctx*/) override { }
  virtual void exitDiagnostic_statement(myParser::Diagnostic_statementContext * /*ctx*/) override { }

  virtual void enterDiagnostic_message(myParser::Diagnostic_messageContext * /*ctx*/) override { }
  virtual void exitDiagnostic_message(myParser::Diagnostic_messageContext * /*ctx*/) override { }

  virtual void enterAvailability_condition(myParser::Availability_conditionContext * /*ctx*/) override { }
  virtual void exitAvailability_condition(myParser::Availability_conditionContext * /*ctx*/) override { }

  virtual void enterAvailability_arguments(myParser::Availability_argumentsContext * /*ctx*/) override { }
  virtual void exitAvailability_arguments(myParser::Availability_argumentsContext * /*ctx*/) override { }

  virtual void enterAvailability_argument(myParser::Availability_argumentContext * /*ctx*/) override { }
  virtual void exitAvailability_argument(myParser::Availability_argumentContext * /*ctx*/) override { }

  virtual void enterPlatform_name(myParser::Platform_nameContext * /*ctx*/) override { }
  virtual void exitPlatform_name(myParser::Platform_nameContext * /*ctx*/) override { }

  virtual void enterPlatform_version(myParser::Platform_versionContext * /*ctx*/) override { }
  virtual void exitPlatform_version(myParser::Platform_versionContext * /*ctx*/) override { }

  virtual void enterGeneric_parameter_clause(myParser::Generic_parameter_clauseContext * /*ctx*/) override { }
  virtual void exitGeneric_parameter_clause(myParser::Generic_parameter_clauseContext * /*ctx*/) override { }

  virtual void enterGeneric_parameter_list(myParser::Generic_parameter_listContext * /*ctx*/) override { }
  virtual void exitGeneric_parameter_list(myParser::Generic_parameter_listContext * /*ctx*/) override { }

  virtual void enterGeneric_parameter(myParser::Generic_parameterContext * /*ctx*/) override { }
  virtual void exitGeneric_parameter(myParser::Generic_parameterContext * /*ctx*/) override { }

  virtual void enterGeneric_where_clause(myParser::Generic_where_clauseContext * /*ctx*/) override { }
  virtual void exitGeneric_where_clause(myParser::Generic_where_clauseContext * /*ctx*/) override { }

  virtual void enterRequirement_list(myParser::Requirement_listContext * /*ctx*/) override { }
  virtual void exitRequirement_list(myParser::Requirement_listContext * /*ctx*/) override { }

  virtual void enterRequirement(myParser::RequirementContext * /*ctx*/) override { }
  virtual void exitRequirement(myParser::RequirementContext * /*ctx*/) override { }

  virtual void enterConformance_requirement(myParser::Conformance_requirementContext * /*ctx*/) override { }
  virtual void exitConformance_requirement(myParser::Conformance_requirementContext * /*ctx*/) override { }

  virtual void enterSame_type_requirement(myParser::Same_type_requirementContext * /*ctx*/) override { }
  virtual void exitSame_type_requirement(myParser::Same_type_requirementContext * /*ctx*/) override { }

  virtual void enterGeneric_argument_clause(myParser::Generic_argument_clauseContext * /*ctx*/) override { }
  virtual void exitGeneric_argument_clause(myParser::Generic_argument_clauseContext * /*ctx*/) override { }

  virtual void enterGeneric_argument_list(myParser::Generic_argument_listContext * /*ctx*/) override { }
  virtual void exitGeneric_argument_list(myParser::Generic_argument_listContext * /*ctx*/) override { }

  virtual void enterGeneric_argument(myParser::Generic_argumentContext * /*ctx*/) override { }
  virtual void exitGeneric_argument(myParser::Generic_argumentContext * /*ctx*/) override { }

  virtual void enterDeclaration(myParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(myParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterDeclarations(myParser::DeclarationsContext * /*ctx*/) override { }
  virtual void exitDeclarations(myParser::DeclarationsContext * /*ctx*/) override { }

  virtual void enterTop_level_declaration(myParser::Top_level_declarationContext * /*ctx*/) override { }
  virtual void exitTop_level_declaration(myParser::Top_level_declarationContext * /*ctx*/) override { }

  virtual void enterCode_block(myParser::Code_blockContext * /*ctx*/) override { }
  virtual void exitCode_block(myParser::Code_blockContext * /*ctx*/) override { }

  virtual void enterImport_declaration(myParser::Import_declarationContext * /*ctx*/) override { }
  virtual void exitImport_declaration(myParser::Import_declarationContext * /*ctx*/) override { }

  virtual void enterImport_kind(myParser::Import_kindContext * /*ctx*/) override { }
  virtual void exitImport_kind(myParser::Import_kindContext * /*ctx*/) override { }

  virtual void enterImport_path(myParser::Import_pathContext * /*ctx*/) override { }
  virtual void exitImport_path(myParser::Import_pathContext * /*ctx*/) override { }

  virtual void enterImport_path_identifier(myParser::Import_path_identifierContext * /*ctx*/) override { }
  virtual void exitImport_path_identifier(myParser::Import_path_identifierContext * /*ctx*/) override { }

  virtual void enterConstant_declaration(myParser::Constant_declarationContext * /*ctx*/) override { }
  virtual void exitConstant_declaration(myParser::Constant_declarationContext * /*ctx*/) override { }

  virtual void enterPattern_initializer_list(myParser::Pattern_initializer_listContext * /*ctx*/) override { }
  virtual void exitPattern_initializer_list(myParser::Pattern_initializer_listContext * /*ctx*/) override { }

  virtual void enterPattern_initializer(myParser::Pattern_initializerContext * /*ctx*/) override { }
  virtual void exitPattern_initializer(myParser::Pattern_initializerContext * /*ctx*/) override { }

  virtual void enterInitializer(myParser::InitializerContext * /*ctx*/) override { }
  virtual void exitInitializer(myParser::InitializerContext * /*ctx*/) override { }

  virtual void enterVariable_declaration(myParser::Variable_declarationContext * /*ctx*/) override { }
  virtual void exitVariable_declaration(myParser::Variable_declarationContext * /*ctx*/) override { }

  virtual void enterVariable_declaration_head(myParser::Variable_declaration_headContext * /*ctx*/) override { }
  virtual void exitVariable_declaration_head(myParser::Variable_declaration_headContext * /*ctx*/) override { }

  virtual void enterVariable_name(myParser::Variable_nameContext * /*ctx*/) override { }
  virtual void exitVariable_name(myParser::Variable_nameContext * /*ctx*/) override { }

  virtual void enterGetter_setter_block(myParser::Getter_setter_blockContext * /*ctx*/) override { }
  virtual void exitGetter_setter_block(myParser::Getter_setter_blockContext * /*ctx*/) override { }

  virtual void enterGetter_clause(myParser::Getter_clauseContext * /*ctx*/) override { }
  virtual void exitGetter_clause(myParser::Getter_clauseContext * /*ctx*/) override { }

  virtual void enterSetter_clause(myParser::Setter_clauseContext * /*ctx*/) override { }
  virtual void exitSetter_clause(myParser::Setter_clauseContext * /*ctx*/) override { }

  virtual void enterSetter_name(myParser::Setter_nameContext * /*ctx*/) override { }
  virtual void exitSetter_name(myParser::Setter_nameContext * /*ctx*/) override { }

  virtual void enterGetter_setter_keyword_block(myParser::Getter_setter_keyword_blockContext * /*ctx*/) override { }
  virtual void exitGetter_setter_keyword_block(myParser::Getter_setter_keyword_blockContext * /*ctx*/) override { }

  virtual void enterGetter_keyword_clause(myParser::Getter_keyword_clauseContext * /*ctx*/) override { }
  virtual void exitGetter_keyword_clause(myParser::Getter_keyword_clauseContext * /*ctx*/) override { }

  virtual void enterSetter_keyword_clause(myParser::Setter_keyword_clauseContext * /*ctx*/) override { }
  virtual void exitSetter_keyword_clause(myParser::Setter_keyword_clauseContext * /*ctx*/) override { }

  virtual void enterWillSet_didSet_block(myParser::WillSet_didSet_blockContext * /*ctx*/) override { }
  virtual void exitWillSet_didSet_block(myParser::WillSet_didSet_blockContext * /*ctx*/) override { }

  virtual void enterWillSet_clause(myParser::WillSet_clauseContext * /*ctx*/) override { }
  virtual void exitWillSet_clause(myParser::WillSet_clauseContext * /*ctx*/) override { }

  virtual void enterDidSet_clause(myParser::DidSet_clauseContext * /*ctx*/) override { }
  virtual void exitDidSet_clause(myParser::DidSet_clauseContext * /*ctx*/) override { }

  virtual void enterTypealias_declaration(myParser::Typealias_declarationContext * /*ctx*/) override { }
  virtual void exitTypealias_declaration(myParser::Typealias_declarationContext * /*ctx*/) override { }

  virtual void enterTypealias_name(myParser::Typealias_nameContext * /*ctx*/) override { }
  virtual void exitTypealias_name(myParser::Typealias_nameContext * /*ctx*/) override { }

  virtual void enterTypealias_assignment(myParser::Typealias_assignmentContext * /*ctx*/) override { }
  virtual void exitTypealias_assignment(myParser::Typealias_assignmentContext * /*ctx*/) override { }

  virtual void enterFunction_declaration(myParser::Function_declarationContext * /*ctx*/) override { }
  virtual void exitFunction_declaration(myParser::Function_declarationContext * /*ctx*/) override { }

  virtual void enterFunction_head(myParser::Function_headContext * /*ctx*/) override { }
  virtual void exitFunction_head(myParser::Function_headContext * /*ctx*/) override { }

  virtual void enterFunction_name(myParser::Function_nameContext * /*ctx*/) override { }
  virtual void exitFunction_name(myParser::Function_nameContext * /*ctx*/) override { }

  virtual void enterFunction_signature(myParser::Function_signatureContext * /*ctx*/) override { }
  virtual void exitFunction_signature(myParser::Function_signatureContext * /*ctx*/) override { }

  virtual void enterFunction_result(myParser::Function_resultContext * /*ctx*/) override { }
  virtual void exitFunction_result(myParser::Function_resultContext * /*ctx*/) override { }

  virtual void enterFunction_body(myParser::Function_bodyContext * /*ctx*/) override { }
  virtual void exitFunction_body(myParser::Function_bodyContext * /*ctx*/) override { }

  virtual void enterParameter_clause(myParser::Parameter_clauseContext * /*ctx*/) override { }
  virtual void exitParameter_clause(myParser::Parameter_clauseContext * /*ctx*/) override { }

  virtual void enterParameter_list(myParser::Parameter_listContext * /*ctx*/) override { }
  virtual void exitParameter_list(myParser::Parameter_listContext * /*ctx*/) override { }

  virtual void enterParameter(myParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(myParser::ParameterContext * /*ctx*/) override { }

  virtual void enterExternal_parameter_name(myParser::External_parameter_nameContext * /*ctx*/) override { }
  virtual void exitExternal_parameter_name(myParser::External_parameter_nameContext * /*ctx*/) override { }

  virtual void enterLocal_parameter_name(myParser::Local_parameter_nameContext * /*ctx*/) override { }
  virtual void exitLocal_parameter_name(myParser::Local_parameter_nameContext * /*ctx*/) override { }

  virtual void enterDefault_argument_clause(myParser::Default_argument_clauseContext * /*ctx*/) override { }
  virtual void exitDefault_argument_clause(myParser::Default_argument_clauseContext * /*ctx*/) override { }

  virtual void enterEnum_declaration(myParser::Enum_declarationContext * /*ctx*/) override { }
  virtual void exitEnum_declaration(myParser::Enum_declarationContext * /*ctx*/) override { }

  virtual void enterUnion_style_enum(myParser::Union_style_enumContext * /*ctx*/) override { }
  virtual void exitUnion_style_enum(myParser::Union_style_enumContext * /*ctx*/) override { }

  virtual void enterUnion_style_enum_members(myParser::Union_style_enum_membersContext * /*ctx*/) override { }
  virtual void exitUnion_style_enum_members(myParser::Union_style_enum_membersContext * /*ctx*/) override { }

  virtual void enterUnion_style_enum_member(myParser::Union_style_enum_memberContext * /*ctx*/) override { }
  virtual void exitUnion_style_enum_member(myParser::Union_style_enum_memberContext * /*ctx*/) override { }

  virtual void enterUnion_style_enum_case_clause(myParser::Union_style_enum_case_clauseContext * /*ctx*/) override { }
  virtual void exitUnion_style_enum_case_clause(myParser::Union_style_enum_case_clauseContext * /*ctx*/) override { }

  virtual void enterUnion_style_enum_case_list(myParser::Union_style_enum_case_listContext * /*ctx*/) override { }
  virtual void exitUnion_style_enum_case_list(myParser::Union_style_enum_case_listContext * /*ctx*/) override { }

  virtual void enterUnion_style_enum_case(myParser::Union_style_enum_caseContext * /*ctx*/) override { }
  virtual void exitUnion_style_enum_case(myParser::Union_style_enum_caseContext * /*ctx*/) override { }

  virtual void enterEnum_name(myParser::Enum_nameContext * /*ctx*/) override { }
  virtual void exitEnum_name(myParser::Enum_nameContext * /*ctx*/) override { }

  virtual void enterEnum_case_name(myParser::Enum_case_nameContext * /*ctx*/) override { }
  virtual void exitEnum_case_name(myParser::Enum_case_nameContext * /*ctx*/) override { }

  virtual void enterRaw_value_style_enum(myParser::Raw_value_style_enumContext * /*ctx*/) override { }
  virtual void exitRaw_value_style_enum(myParser::Raw_value_style_enumContext * /*ctx*/) override { }

  virtual void enterRaw_value_style_enum_members(myParser::Raw_value_style_enum_membersContext * /*ctx*/) override { }
  virtual void exitRaw_value_style_enum_members(myParser::Raw_value_style_enum_membersContext * /*ctx*/) override { }

  virtual void enterRaw_value_style_enum_member(myParser::Raw_value_style_enum_memberContext * /*ctx*/) override { }
  virtual void exitRaw_value_style_enum_member(myParser::Raw_value_style_enum_memberContext * /*ctx*/) override { }

  virtual void enterRaw_value_style_enum_case_clause(myParser::Raw_value_style_enum_case_clauseContext * /*ctx*/) override { }
  virtual void exitRaw_value_style_enum_case_clause(myParser::Raw_value_style_enum_case_clauseContext * /*ctx*/) override { }

  virtual void enterRaw_value_style_enum_case_list(myParser::Raw_value_style_enum_case_listContext * /*ctx*/) override { }
  virtual void exitRaw_value_style_enum_case_list(myParser::Raw_value_style_enum_case_listContext * /*ctx*/) override { }

  virtual void enterRaw_value_style_enum_case(myParser::Raw_value_style_enum_caseContext * /*ctx*/) override { }
  virtual void exitRaw_value_style_enum_case(myParser::Raw_value_style_enum_caseContext * /*ctx*/) override { }

  virtual void enterRaw_value_assignment(myParser::Raw_value_assignmentContext * /*ctx*/) override { }
  virtual void exitRaw_value_assignment(myParser::Raw_value_assignmentContext * /*ctx*/) override { }

  virtual void enterRaw_value_literal(myParser::Raw_value_literalContext * /*ctx*/) override { }
  virtual void exitRaw_value_literal(myParser::Raw_value_literalContext * /*ctx*/) override { }

  virtual void enterStruct_declaration(myParser::Struct_declarationContext * /*ctx*/) override { }
  virtual void exitStruct_declaration(myParser::Struct_declarationContext * /*ctx*/) override { }

  virtual void enterStruct_name(myParser::Struct_nameContext * /*ctx*/) override { }
  virtual void exitStruct_name(myParser::Struct_nameContext * /*ctx*/) override { }

  virtual void enterStruct_body(myParser::Struct_bodyContext * /*ctx*/) override { }
  virtual void exitStruct_body(myParser::Struct_bodyContext * /*ctx*/) override { }

  virtual void enterStruct_members(myParser::Struct_membersContext * /*ctx*/) override { }
  virtual void exitStruct_members(myParser::Struct_membersContext * /*ctx*/) override { }

  virtual void enterStruct_member(myParser::Struct_memberContext * /*ctx*/) override { }
  virtual void exitStruct_member(myParser::Struct_memberContext * /*ctx*/) override { }

  virtual void enterClass_declaration(myParser::Class_declarationContext * /*ctx*/) override { }
  virtual void exitClass_declaration(myParser::Class_declarationContext * /*ctx*/) override { }

  virtual void enterClass_name(myParser::Class_nameContext * /*ctx*/) override { }
  virtual void exitClass_name(myParser::Class_nameContext * /*ctx*/) override { }

  virtual void enterClass_body(myParser::Class_bodyContext * /*ctx*/) override { }
  virtual void exitClass_body(myParser::Class_bodyContext * /*ctx*/) override { }

  virtual void enterClass_members(myParser::Class_membersContext * /*ctx*/) override { }
  virtual void exitClass_members(myParser::Class_membersContext * /*ctx*/) override { }

  virtual void enterClass_member(myParser::Class_memberContext * /*ctx*/) override { }
  virtual void exitClass_member(myParser::Class_memberContext * /*ctx*/) override { }

  virtual void enterProtocol_declaration(myParser::Protocol_declarationContext * /*ctx*/) override { }
  virtual void exitProtocol_declaration(myParser::Protocol_declarationContext * /*ctx*/) override { }

  virtual void enterProtocol_name(myParser::Protocol_nameContext * /*ctx*/) override { }
  virtual void exitProtocol_name(myParser::Protocol_nameContext * /*ctx*/) override { }

  virtual void enterProtocol_body(myParser::Protocol_bodyContext * /*ctx*/) override { }
  virtual void exitProtocol_body(myParser::Protocol_bodyContext * /*ctx*/) override { }

  virtual void enterProtocol_members(myParser::Protocol_membersContext * /*ctx*/) override { }
  virtual void exitProtocol_members(myParser::Protocol_membersContext * /*ctx*/) override { }

  virtual void enterProtocol_member(myParser::Protocol_memberContext * /*ctx*/) override { }
  virtual void exitProtocol_member(myParser::Protocol_memberContext * /*ctx*/) override { }

  virtual void enterProtocol_member_declaration(myParser::Protocol_member_declarationContext * /*ctx*/) override { }
  virtual void exitProtocol_member_declaration(myParser::Protocol_member_declarationContext * /*ctx*/) override { }

  virtual void enterProtocol_property_declaration(myParser::Protocol_property_declarationContext * /*ctx*/) override { }
  virtual void exitProtocol_property_declaration(myParser::Protocol_property_declarationContext * /*ctx*/) override { }

  virtual void enterProtocol_method_declaration(myParser::Protocol_method_declarationContext * /*ctx*/) override { }
  virtual void exitProtocol_method_declaration(myParser::Protocol_method_declarationContext * /*ctx*/) override { }

  virtual void enterProtocol_initializer_declaration(myParser::Protocol_initializer_declarationContext * /*ctx*/) override { }
  virtual void exitProtocol_initializer_declaration(myParser::Protocol_initializer_declarationContext * /*ctx*/) override { }

  virtual void enterProtocol_subscript_declaration(myParser::Protocol_subscript_declarationContext * /*ctx*/) override { }
  virtual void exitProtocol_subscript_declaration(myParser::Protocol_subscript_declarationContext * /*ctx*/) override { }

  virtual void enterProtocol_associated_type_declaration(myParser::Protocol_associated_type_declarationContext * /*ctx*/) override { }
  virtual void exitProtocol_associated_type_declaration(myParser::Protocol_associated_type_declarationContext * /*ctx*/) override { }

  virtual void enterInitializer_declaration(myParser::Initializer_declarationContext * /*ctx*/) override { }
  virtual void exitInitializer_declaration(myParser::Initializer_declarationContext * /*ctx*/) override { }

  virtual void enterInitializer_head(myParser::Initializer_headContext * /*ctx*/) override { }
  virtual void exitInitializer_head(myParser::Initializer_headContext * /*ctx*/) override { }

  virtual void enterInitializer_body(myParser::Initializer_bodyContext * /*ctx*/) override { }
  virtual void exitInitializer_body(myParser::Initializer_bodyContext * /*ctx*/) override { }

  virtual void enterDeinitializer_declaration(myParser::Deinitializer_declarationContext * /*ctx*/) override { }
  virtual void exitDeinitializer_declaration(myParser::Deinitializer_declarationContext * /*ctx*/) override { }

  virtual void enterExtension_declaration(myParser::Extension_declarationContext * /*ctx*/) override { }
  virtual void exitExtension_declaration(myParser::Extension_declarationContext * /*ctx*/) override { }

  virtual void enterExtension_body(myParser::Extension_bodyContext * /*ctx*/) override { }
  virtual void exitExtension_body(myParser::Extension_bodyContext * /*ctx*/) override { }

  virtual void enterExtension_members(myParser::Extension_membersContext * /*ctx*/) override { }
  virtual void exitExtension_members(myParser::Extension_membersContext * /*ctx*/) override { }

  virtual void enterExtension_member(myParser::Extension_memberContext * /*ctx*/) override { }
  virtual void exitExtension_member(myParser::Extension_memberContext * /*ctx*/) override { }

  virtual void enterSubscript_declaration(myParser::Subscript_declarationContext * /*ctx*/) override { }
  virtual void exitSubscript_declaration(myParser::Subscript_declarationContext * /*ctx*/) override { }

  virtual void enterSubscript_head(myParser::Subscript_headContext * /*ctx*/) override { }
  virtual void exitSubscript_head(myParser::Subscript_headContext * /*ctx*/) override { }

  virtual void enterSubscript_result(myParser::Subscript_resultContext * /*ctx*/) override { }
  virtual void exitSubscript_result(myParser::Subscript_resultContext * /*ctx*/) override { }

  virtual void enterOperator_declaration(myParser::Operator_declarationContext * /*ctx*/) override { }
  virtual void exitOperator_declaration(myParser::Operator_declarationContext * /*ctx*/) override { }

  virtual void enterPrefix_operator_declaration(myParser::Prefix_operator_declarationContext * /*ctx*/) override { }
  virtual void exitPrefix_operator_declaration(myParser::Prefix_operator_declarationContext * /*ctx*/) override { }

  virtual void enterPostfix_operator_declaration(myParser::Postfix_operator_declarationContext * /*ctx*/) override { }
  virtual void exitPostfix_operator_declaration(myParser::Postfix_operator_declarationContext * /*ctx*/) override { }

  virtual void enterInfix_operator_declaration(myParser::Infix_operator_declarationContext * /*ctx*/) override { }
  virtual void exitInfix_operator_declaration(myParser::Infix_operator_declarationContext * /*ctx*/) override { }

  virtual void enterInfix_operator_group(myParser::Infix_operator_groupContext * /*ctx*/) override { }
  virtual void exitInfix_operator_group(myParser::Infix_operator_groupContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_declaration(myParser::Precedence_group_declarationContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_declaration(myParser::Precedence_group_declarationContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_attributes(myParser::Precedence_group_attributesContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_attributes(myParser::Precedence_group_attributesContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_attribute(myParser::Precedence_group_attributeContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_attribute(myParser::Precedence_group_attributeContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_relation(myParser::Precedence_group_relationContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_relation(myParser::Precedence_group_relationContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_assignment(myParser::Precedence_group_assignmentContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_assignment(myParser::Precedence_group_assignmentContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_associativity(myParser::Precedence_group_associativityContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_associativity(myParser::Precedence_group_associativityContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_names(myParser::Precedence_group_namesContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_names(myParser::Precedence_group_namesContext * /*ctx*/) override { }

  virtual void enterPrecedence_group_name(myParser::Precedence_group_nameContext * /*ctx*/) override { }
  virtual void exitPrecedence_group_name(myParser::Precedence_group_nameContext * /*ctx*/) override { }

  virtual void enterDeclaration_modifier(myParser::Declaration_modifierContext * /*ctx*/) override { }
  virtual void exitDeclaration_modifier(myParser::Declaration_modifierContext * /*ctx*/) override { }

  virtual void enterDeclaration_modifiers(myParser::Declaration_modifiersContext * /*ctx*/) override { }
  virtual void exitDeclaration_modifiers(myParser::Declaration_modifiersContext * /*ctx*/) override { }

  virtual void enterAccess_level_modifier(myParser::Access_level_modifierContext * /*ctx*/) override { }
  virtual void exitAccess_level_modifier(myParser::Access_level_modifierContext * /*ctx*/) override { }

  virtual void enterMutation_modifier(myParser::Mutation_modifierContext * /*ctx*/) override { }
  virtual void exitMutation_modifier(myParser::Mutation_modifierContext * /*ctx*/) override { }

  virtual void enterPattern(myParser::PatternContext * /*ctx*/) override { }
  virtual void exitPattern(myParser::PatternContext * /*ctx*/) override { }

  virtual void enterWildcard_pattern(myParser::Wildcard_patternContext * /*ctx*/) override { }
  virtual void exitWildcard_pattern(myParser::Wildcard_patternContext * /*ctx*/) override { }

  virtual void enterIdentifier_pattern(myParser::Identifier_patternContext * /*ctx*/) override { }
  virtual void exitIdentifier_pattern(myParser::Identifier_patternContext * /*ctx*/) override { }

  virtual void enterValue_binding_pattern(myParser::Value_binding_patternContext * /*ctx*/) override { }
  virtual void exitValue_binding_pattern(myParser::Value_binding_patternContext * /*ctx*/) override { }

  virtual void enterTuple_pattern(myParser::Tuple_patternContext * /*ctx*/) override { }
  virtual void exitTuple_pattern(myParser::Tuple_patternContext * /*ctx*/) override { }

  virtual void enterTuple_pattern_element_list(myParser::Tuple_pattern_element_listContext * /*ctx*/) override { }
  virtual void exitTuple_pattern_element_list(myParser::Tuple_pattern_element_listContext * /*ctx*/) override { }

  virtual void enterTuple_pattern_element(myParser::Tuple_pattern_elementContext * /*ctx*/) override { }
  virtual void exitTuple_pattern_element(myParser::Tuple_pattern_elementContext * /*ctx*/) override { }

  virtual void enterEnum_case_pattern(myParser::Enum_case_patternContext * /*ctx*/) override { }
  virtual void exitEnum_case_pattern(myParser::Enum_case_patternContext * /*ctx*/) override { }

  virtual void enterOptional_pattern(myParser::Optional_patternContext * /*ctx*/) override { }
  virtual void exitOptional_pattern(myParser::Optional_patternContext * /*ctx*/) override { }

  virtual void enterExpression_pattern(myParser::Expression_patternContext * /*ctx*/) override { }
  virtual void exitExpression_pattern(myParser::Expression_patternContext * /*ctx*/) override { }

  virtual void enterAttribute(myParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(myParser::AttributeContext * /*ctx*/) override { }

  virtual void enterAttribute_name(myParser::Attribute_nameContext * /*ctx*/) override { }
  virtual void exitAttribute_name(myParser::Attribute_nameContext * /*ctx*/) override { }

  virtual void enterAttribute_argument_clause(myParser::Attribute_argument_clauseContext * /*ctx*/) override { }
  virtual void exitAttribute_argument_clause(myParser::Attribute_argument_clauseContext * /*ctx*/) override { }

  virtual void enterAttributes(myParser::AttributesContext * /*ctx*/) override { }
  virtual void exitAttributes(myParser::AttributesContext * /*ctx*/) override { }

  virtual void enterBalanced_tokens(myParser::Balanced_tokensContext * /*ctx*/) override { }
  virtual void exitBalanced_tokens(myParser::Balanced_tokensContext * /*ctx*/) override { }

  virtual void enterBalanced_token(myParser::Balanced_tokenContext * /*ctx*/) override { }
  virtual void exitBalanced_token(myParser::Balanced_tokenContext * /*ctx*/) override { }

  virtual void enterBalanced_token_punctuation(myParser::Balanced_token_punctuationContext * /*ctx*/) override { }
  virtual void exitBalanced_token_punctuation(myParser::Balanced_token_punctuationContext * /*ctx*/) override { }

  virtual void enterExpression(myParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(myParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterExpression_list(myParser::Expression_listContext * /*ctx*/) override { }
  virtual void exitExpression_list(myParser::Expression_listContext * /*ctx*/) override { }

  virtual void enterPrefix_expression(myParser::Prefix_expressionContext * /*ctx*/) override { }
  virtual void exitPrefix_expression(myParser::Prefix_expressionContext * /*ctx*/) override { }

  virtual void enterIn_out_expression(myParser::In_out_expressionContext * /*ctx*/) override { }
  virtual void exitIn_out_expression(myParser::In_out_expressionContext * /*ctx*/) override { }

  virtual void enterTry_operator(myParser::Try_operatorContext * /*ctx*/) override { }
  virtual void exitTry_operator(myParser::Try_operatorContext * /*ctx*/) override { }

  virtual void enterBinary_expression(myParser::Binary_expressionContext * /*ctx*/) override { }
  virtual void exitBinary_expression(myParser::Binary_expressionContext * /*ctx*/) override { }

  virtual void enterBinary_expressions(myParser::Binary_expressionsContext * /*ctx*/) override { }
  virtual void exitBinary_expressions(myParser::Binary_expressionsContext * /*ctx*/) override { }

  virtual void enterConditional_operator(myParser::Conditional_operatorContext * /*ctx*/) override { }
  virtual void exitConditional_operator(myParser::Conditional_operatorContext * /*ctx*/) override { }

  virtual void enterType_casting_operator(myParser::Type_casting_operatorContext * /*ctx*/) override { }
  virtual void exitType_casting_operator(myParser::Type_casting_operatorContext * /*ctx*/) override { }

  virtual void enterPrimary_expression(myParser::Primary_expressionContext * /*ctx*/) override { }
  virtual void exitPrimary_expression(myParser::Primary_expressionContext * /*ctx*/) override { }

  virtual void enterUnqualified_name(myParser::Unqualified_nameContext * /*ctx*/) override { }
  virtual void exitUnqualified_name(myParser::Unqualified_nameContext * /*ctx*/) override { }

  virtual void enterLiteral_expression(myParser::Literal_expressionContext * /*ctx*/) override { }
  virtual void exitLiteral_expression(myParser::Literal_expressionContext * /*ctx*/) override { }

  virtual void enterArray_literal(myParser::Array_literalContext * /*ctx*/) override { }
  virtual void exitArray_literal(myParser::Array_literalContext * /*ctx*/) override { }

  virtual void enterArray_literal_items(myParser::Array_literal_itemsContext * /*ctx*/) override { }
  virtual void exitArray_literal_items(myParser::Array_literal_itemsContext * /*ctx*/) override { }

  virtual void enterArray_literal_item(myParser::Array_literal_itemContext * /*ctx*/) override { }
  virtual void exitArray_literal_item(myParser::Array_literal_itemContext * /*ctx*/) override { }

  virtual void enterDictionary_literal(myParser::Dictionary_literalContext * /*ctx*/) override { }
  virtual void exitDictionary_literal(myParser::Dictionary_literalContext * /*ctx*/) override { }

  virtual void enterDictionary_literal_items(myParser::Dictionary_literal_itemsContext * /*ctx*/) override { }
  virtual void exitDictionary_literal_items(myParser::Dictionary_literal_itemsContext * /*ctx*/) override { }

  virtual void enterDictionary_literal_item(myParser::Dictionary_literal_itemContext * /*ctx*/) override { }
  virtual void exitDictionary_literal_item(myParser::Dictionary_literal_itemContext * /*ctx*/) override { }

  virtual void enterPlayground_literal(myParser::Playground_literalContext * /*ctx*/) override { }
  virtual void exitPlayground_literal(myParser::Playground_literalContext * /*ctx*/) override { }

  virtual void enterSelf_pure_expression(myParser::Self_pure_expressionContext * /*ctx*/) override { }
  virtual void exitSelf_pure_expression(myParser::Self_pure_expressionContext * /*ctx*/) override { }

  virtual void enterSelf_method_expression(myParser::Self_method_expressionContext * /*ctx*/) override { }
  virtual void exitSelf_method_expression(myParser::Self_method_expressionContext * /*ctx*/) override { }

  virtual void enterSelf_subscript_expression(myParser::Self_subscript_expressionContext * /*ctx*/) override { }
  virtual void exitSelf_subscript_expression(myParser::Self_subscript_expressionContext * /*ctx*/) override { }

  virtual void enterSelf_initializer_expression(myParser::Self_initializer_expressionContext * /*ctx*/) override { }
  virtual void exitSelf_initializer_expression(myParser::Self_initializer_expressionContext * /*ctx*/) override { }

  virtual void enterSuperclass_method_expression(myParser::Superclass_method_expressionContext * /*ctx*/) override { }
  virtual void exitSuperclass_method_expression(myParser::Superclass_method_expressionContext * /*ctx*/) override { }

  virtual void enterSuperclass_subscript_expression(myParser::Superclass_subscript_expressionContext * /*ctx*/) override { }
  virtual void exitSuperclass_subscript_expression(myParser::Superclass_subscript_expressionContext * /*ctx*/) override { }

  virtual void enterSuperclass_initializer_expression(myParser::Superclass_initializer_expressionContext * /*ctx*/) override { }
  virtual void exitSuperclass_initializer_expression(myParser::Superclass_initializer_expressionContext * /*ctx*/) override { }

  virtual void enterClosure_expression(myParser::Closure_expressionContext * /*ctx*/) override { }
  virtual void exitClosure_expression(myParser::Closure_expressionContext * /*ctx*/) override { }

  virtual void enterClosure_signature(myParser::Closure_signatureContext * /*ctx*/) override { }
  virtual void exitClosure_signature(myParser::Closure_signatureContext * /*ctx*/) override { }

  virtual void enterClosure_parameter_clause(myParser::Closure_parameter_clauseContext * /*ctx*/) override { }
  virtual void exitClosure_parameter_clause(myParser::Closure_parameter_clauseContext * /*ctx*/) override { }

  virtual void enterClosure_parameter_list(myParser::Closure_parameter_listContext * /*ctx*/) override { }
  virtual void exitClosure_parameter_list(myParser::Closure_parameter_listContext * /*ctx*/) override { }

  virtual void enterClosure_parameter(myParser::Closure_parameterContext * /*ctx*/) override { }
  virtual void exitClosure_parameter(myParser::Closure_parameterContext * /*ctx*/) override { }

  virtual void enterCapture_list(myParser::Capture_listContext * /*ctx*/) override { }
  virtual void exitCapture_list(myParser::Capture_listContext * /*ctx*/) override { }

  virtual void enterCapture_list_items(myParser::Capture_list_itemsContext * /*ctx*/) override { }
  virtual void exitCapture_list_items(myParser::Capture_list_itemsContext * /*ctx*/) override { }

  virtual void enterCapture_list_item(myParser::Capture_list_itemContext * /*ctx*/) override { }
  virtual void exitCapture_list_item(myParser::Capture_list_itemContext * /*ctx*/) override { }

  virtual void enterCapture_specifier(myParser::Capture_specifierContext * /*ctx*/) override { }
  virtual void exitCapture_specifier(myParser::Capture_specifierContext * /*ctx*/) override { }

  virtual void enterImplicit_member_expression(myParser::Implicit_member_expressionContext * /*ctx*/) override { }
  virtual void exitImplicit_member_expression(myParser::Implicit_member_expressionContext * /*ctx*/) override { }

  virtual void enterParenthesized_operator(myParser::Parenthesized_operatorContext * /*ctx*/) override { }
  virtual void exitParenthesized_operator(myParser::Parenthesized_operatorContext * /*ctx*/) override { }

  virtual void enterParenthesized_expression(myParser::Parenthesized_expressionContext * /*ctx*/) override { }
  virtual void exitParenthesized_expression(myParser::Parenthesized_expressionContext * /*ctx*/) override { }

  virtual void enterTuple_expression(myParser::Tuple_expressionContext * /*ctx*/) override { }
  virtual void exitTuple_expression(myParser::Tuple_expressionContext * /*ctx*/) override { }

  virtual void enterTuple_element_list(myParser::Tuple_element_listContext * /*ctx*/) override { }
  virtual void exitTuple_element_list(myParser::Tuple_element_listContext * /*ctx*/) override { }

  virtual void enterTuple_element(myParser::Tuple_elementContext * /*ctx*/) override { }
  virtual void exitTuple_element(myParser::Tuple_elementContext * /*ctx*/) override { }

  virtual void enterWildcard_expression(myParser::Wildcard_expressionContext * /*ctx*/) override { }
  virtual void exitWildcard_expression(myParser::Wildcard_expressionContext * /*ctx*/) override { }

  virtual void enterKey_path_expression(myParser::Key_path_expressionContext * /*ctx*/) override { }
  virtual void exitKey_path_expression(myParser::Key_path_expressionContext * /*ctx*/) override { }

  virtual void enterKey_path_components(myParser::Key_path_componentsContext * /*ctx*/) override { }
  virtual void exitKey_path_components(myParser::Key_path_componentsContext * /*ctx*/) override { }

  virtual void enterKey_path_component(myParser::Key_path_componentContext * /*ctx*/) override { }
  virtual void exitKey_path_component(myParser::Key_path_componentContext * /*ctx*/) override { }

  virtual void enterKey_path_postfixes(myParser::Key_path_postfixesContext * /*ctx*/) override { }
  virtual void exitKey_path_postfixes(myParser::Key_path_postfixesContext * /*ctx*/) override { }

  virtual void enterKey_path_postfix(myParser::Key_path_postfixContext * /*ctx*/) override { }
  virtual void exitKey_path_postfix(myParser::Key_path_postfixContext * /*ctx*/) override { }

  virtual void enterSelector_expression(myParser::Selector_expressionContext * /*ctx*/) override { }
  virtual void exitSelector_expression(myParser::Selector_expressionContext * /*ctx*/) override { }

  virtual void enterKey_path_string_expression(myParser::Key_path_string_expressionContext * /*ctx*/) override { }
  virtual void exitKey_path_string_expression(myParser::Key_path_string_expressionContext * /*ctx*/) override { }

  virtual void enterPostfix_expression(myParser::Postfix_expressionContext * /*ctx*/) override { }
  virtual void exitPostfix_expression(myParser::Postfix_expressionContext * /*ctx*/) override { }

  virtual void enterFunction_call_suffix(myParser::Function_call_suffixContext * /*ctx*/) override { }
  virtual void exitFunction_call_suffix(myParser::Function_call_suffixContext * /*ctx*/) override { }

  virtual void enterInitializer_suffix(myParser::Initializer_suffixContext * /*ctx*/) override { }
  virtual void exitInitializer_suffix(myParser::Initializer_suffixContext * /*ctx*/) override { }

  virtual void enterExplicit_member_suffix(myParser::Explicit_member_suffixContext * /*ctx*/) override { }
  virtual void exitExplicit_member_suffix(myParser::Explicit_member_suffixContext * /*ctx*/) override { }

  virtual void enterPostfix_self_suffix(myParser::Postfix_self_suffixContext * /*ctx*/) override { }
  virtual void exitPostfix_self_suffix(myParser::Postfix_self_suffixContext * /*ctx*/) override { }

  virtual void enterSubscript_suffix(myParser::Subscript_suffixContext * /*ctx*/) override { }
  virtual void exitSubscript_suffix(myParser::Subscript_suffixContext * /*ctx*/) override { }

  virtual void enterForced_value_suffix(myParser::Forced_value_suffixContext * /*ctx*/) override { }
  virtual void exitForced_value_suffix(myParser::Forced_value_suffixContext * /*ctx*/) override { }

  virtual void enterOptional_chaining_suffix(myParser::Optional_chaining_suffixContext * /*ctx*/) override { }
  virtual void exitOptional_chaining_suffix(myParser::Optional_chaining_suffixContext * /*ctx*/) override { }

  virtual void enterFunction_call_argument_clause(myParser::Function_call_argument_clauseContext * /*ctx*/) override { }
  virtual void exitFunction_call_argument_clause(myParser::Function_call_argument_clauseContext * /*ctx*/) override { }

  virtual void enterFunction_call_argument_list(myParser::Function_call_argument_listContext * /*ctx*/) override { }
  virtual void exitFunction_call_argument_list(myParser::Function_call_argument_listContext * /*ctx*/) override { }

  virtual void enterFunction_call_argument(myParser::Function_call_argumentContext * /*ctx*/) override { }
  virtual void exitFunction_call_argument(myParser::Function_call_argumentContext * /*ctx*/) override { }

  virtual void enterTrailing_closures(myParser::Trailing_closuresContext * /*ctx*/) override { }
  virtual void exitTrailing_closures(myParser::Trailing_closuresContext * /*ctx*/) override { }

  virtual void enterLabeled_trailing_closures(myParser::Labeled_trailing_closuresContext * /*ctx*/) override { }
  virtual void exitLabeled_trailing_closures(myParser::Labeled_trailing_closuresContext * /*ctx*/) override { }

  virtual void enterLabeled_trailing_closure(myParser::Labeled_trailing_closureContext * /*ctx*/) override { }
  virtual void exitLabeled_trailing_closure(myParser::Labeled_trailing_closureContext * /*ctx*/) override { }

  virtual void enterArgument_names(myParser::Argument_namesContext * /*ctx*/) override { }
  virtual void exitArgument_names(myParser::Argument_namesContext * /*ctx*/) override { }

  virtual void enterArgument_name(myParser::Argument_nameContext * /*ctx*/) override { }
  virtual void exitArgument_name(myParser::Argument_nameContext * /*ctx*/) override { }

  virtual void enterType(myParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(myParser::TypeContext * /*ctx*/) override { }

  virtual void enterType_annotation(myParser::Type_annotationContext * /*ctx*/) override { }
  virtual void exitType_annotation(myParser::Type_annotationContext * /*ctx*/) override { }

  virtual void enterType_identifier(myParser::Type_identifierContext * /*ctx*/) override { }
  virtual void exitType_identifier(myParser::Type_identifierContext * /*ctx*/) override { }

  virtual void enterType_name(myParser::Type_nameContext * /*ctx*/) override { }
  virtual void exitType_name(myParser::Type_nameContext * /*ctx*/) override { }

  virtual void enterTuple_type(myParser::Tuple_typeContext * /*ctx*/) override { }
  virtual void exitTuple_type(myParser::Tuple_typeContext * /*ctx*/) override { }

  virtual void enterTuple_type_element_list(myParser::Tuple_type_element_listContext * /*ctx*/) override { }
  virtual void exitTuple_type_element_list(myParser::Tuple_type_element_listContext * /*ctx*/) override { }

  virtual void enterTuple_type_element(myParser::Tuple_type_elementContext * /*ctx*/) override { }
  virtual void exitTuple_type_element(myParser::Tuple_type_elementContext * /*ctx*/) override { }

  virtual void enterElement_name(myParser::Element_nameContext * /*ctx*/) override { }
  virtual void exitElement_name(myParser::Element_nameContext * /*ctx*/) override { }

  virtual void enterFunction_type(myParser::Function_typeContext * /*ctx*/) override { }
  virtual void exitFunction_type(myParser::Function_typeContext * /*ctx*/) override { }

  virtual void enterFunction_type_argument_clause(myParser::Function_type_argument_clauseContext * /*ctx*/) override { }
  virtual void exitFunction_type_argument_clause(myParser::Function_type_argument_clauseContext * /*ctx*/) override { }

  virtual void enterFunction_type_argument_list(myParser::Function_type_argument_listContext * /*ctx*/) override { }
  virtual void exitFunction_type_argument_list(myParser::Function_type_argument_listContext * /*ctx*/) override { }

  virtual void enterFunction_type_argument(myParser::Function_type_argumentContext * /*ctx*/) override { }
  virtual void exitFunction_type_argument(myParser::Function_type_argumentContext * /*ctx*/) override { }

  virtual void enterArgument_label(myParser::Argument_labelContext * /*ctx*/) override { }
  virtual void exitArgument_label(myParser::Argument_labelContext * /*ctx*/) override { }

  virtual void enterArray_type(myParser::Array_typeContext * /*ctx*/) override { }
  virtual void exitArray_type(myParser::Array_typeContext * /*ctx*/) override { }

  virtual void enterDictionary_type(myParser::Dictionary_typeContext * /*ctx*/) override { }
  virtual void exitDictionary_type(myParser::Dictionary_typeContext * /*ctx*/) override { }

  virtual void enterProtocol_composition_type(myParser::Protocol_composition_typeContext * /*ctx*/) override { }
  virtual void exitProtocol_composition_type(myParser::Protocol_composition_typeContext * /*ctx*/) override { }

  virtual void enterTrailing_composition_and(myParser::Trailing_composition_andContext * /*ctx*/) override { }
  virtual void exitTrailing_composition_and(myParser::Trailing_composition_andContext * /*ctx*/) override { }

  virtual void enterOpaque_type(myParser::Opaque_typeContext * /*ctx*/) override { }
  virtual void exitOpaque_type(myParser::Opaque_typeContext * /*ctx*/) override { }

  virtual void enterAny_type(myParser::Any_typeContext * /*ctx*/) override { }
  virtual void exitAny_type(myParser::Any_typeContext * /*ctx*/) override { }

  virtual void enterSelf_type(myParser::Self_typeContext * /*ctx*/) override { }
  virtual void exitSelf_type(myParser::Self_typeContext * /*ctx*/) override { }

  virtual void enterType_inheritance_clause(myParser::Type_inheritance_clauseContext * /*ctx*/) override { }
  virtual void exitType_inheritance_clause(myParser::Type_inheritance_clauseContext * /*ctx*/) override { }

  virtual void enterType_inheritance_list(myParser::Type_inheritance_listContext * /*ctx*/) override { }
  virtual void exitType_inheritance_list(myParser::Type_inheritance_listContext * /*ctx*/) override { }

  virtual void enterIdentifier(myParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(myParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterIdentifier_list(myParser::Identifier_listContext * /*ctx*/) override { }
  virtual void exitIdentifier_list(myParser::Identifier_listContext * /*ctx*/) override { }

  virtual void enterKeyword(myParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(myParser::KeywordContext * /*ctx*/) override { }

  virtual void enterAssignment_operator(myParser::Assignment_operatorContext * /*ctx*/) override { }
  virtual void exitAssignment_operator(myParser::Assignment_operatorContext * /*ctx*/) override { }

  virtual void enterNegate_prefix_operator(myParser::Negate_prefix_operatorContext * /*ctx*/) override { }
  virtual void exitNegate_prefix_operator(myParser::Negate_prefix_operatorContext * /*ctx*/) override { }

  virtual void enterCompilation_condition_AND(myParser::Compilation_condition_ANDContext * /*ctx*/) override { }
  virtual void exitCompilation_condition_AND(myParser::Compilation_condition_ANDContext * /*ctx*/) override { }

  virtual void enterCompilation_condition_OR(myParser::Compilation_condition_ORContext * /*ctx*/) override { }
  virtual void exitCompilation_condition_OR(myParser::Compilation_condition_ORContext * /*ctx*/) override { }

  virtual void enterCompilation_condition_GE(myParser::Compilation_condition_GEContext * /*ctx*/) override { }
  virtual void exitCompilation_condition_GE(myParser::Compilation_condition_GEContext * /*ctx*/) override { }

  virtual void enterCompilation_condition_L(myParser::Compilation_condition_LContext * /*ctx*/) override { }
  virtual void exitCompilation_condition_L(myParser::Compilation_condition_LContext * /*ctx*/) override { }

  virtual void enterArrow_operator(myParser::Arrow_operatorContext * /*ctx*/) override { }
  virtual void exitArrow_operator(myParser::Arrow_operatorContext * /*ctx*/) override { }

  virtual void enterRange_operator(myParser::Range_operatorContext * /*ctx*/) override { }
  virtual void exitRange_operator(myParser::Range_operatorContext * /*ctx*/) override { }

  virtual void enterSame_type_equals(myParser::Same_type_equalsContext * /*ctx*/) override { }
  virtual void exitSame_type_equals(myParser::Same_type_equalsContext * /*ctx*/) override { }

  virtual void enterBinary_operator(myParser::Binary_operatorContext * /*ctx*/) override { }
  virtual void exitBinary_operator(myParser::Binary_operatorContext * /*ctx*/) override { }

  virtual void enterPrefix_operator(myParser::Prefix_operatorContext * /*ctx*/) override { }
  virtual void exitPrefix_operator(myParser::Prefix_operatorContext * /*ctx*/) override { }

  virtual void enterPostfix_operator(myParser::Postfix_operatorContext * /*ctx*/) override { }
  virtual void exitPostfix_operator(myParser::Postfix_operatorContext * /*ctx*/) override { }

  virtual void enterOperator(myParser::OperatorContext * /*ctx*/) override { }
  virtual void exitOperator(myParser::OperatorContext * /*ctx*/) override { }

  virtual void enterOperator_head(myParser::Operator_headContext * /*ctx*/) override { }
  virtual void exitOperator_head(myParser::Operator_headContext * /*ctx*/) override { }

  virtual void enterOperator_character(myParser::Operator_characterContext * /*ctx*/) override { }
  virtual void exitOperator_character(myParser::Operator_characterContext * /*ctx*/) override { }

  virtual void enterOperator_characters(myParser::Operator_charactersContext * /*ctx*/) override { }
  virtual void exitOperator_characters(myParser::Operator_charactersContext * /*ctx*/) override { }

  virtual void enterDot_operator_head(myParser::Dot_operator_headContext * /*ctx*/) override { }
  virtual void exitDot_operator_head(myParser::Dot_operator_headContext * /*ctx*/) override { }

  virtual void enterDot_operator_character(myParser::Dot_operator_characterContext * /*ctx*/) override { }
  virtual void exitDot_operator_character(myParser::Dot_operator_characterContext * /*ctx*/) override { }

  virtual void enterDot_operator_characters(myParser::Dot_operator_charactersContext * /*ctx*/) override { }
  virtual void exitDot_operator_characters(myParser::Dot_operator_charactersContext * /*ctx*/) override { }

  virtual void enterLiteral(myParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(myParser::LiteralContext * /*ctx*/) override { }

  virtual void enterNumeric_literal(myParser::Numeric_literalContext * /*ctx*/) override { }
  virtual void exitNumeric_literal(myParser::Numeric_literalContext * /*ctx*/) override { }

  virtual void enterBoolean_literal(myParser::Boolean_literalContext * /*ctx*/) override { }
  virtual void exitBoolean_literal(myParser::Boolean_literalContext * /*ctx*/) override { }

  virtual void enterNil_literal(myParser::Nil_literalContext * /*ctx*/) override { }
  virtual void exitNil_literal(myParser::Nil_literalContext * /*ctx*/) override { }

  virtual void enterInteger_literal(myParser::Integer_literalContext * /*ctx*/) override { }
  virtual void exitInteger_literal(myParser::Integer_literalContext * /*ctx*/) override { }

  virtual void enterString_literal(myParser::String_literalContext * /*ctx*/) override { }
  virtual void exitString_literal(myParser::String_literalContext * /*ctx*/) override { }

  virtual void enterExtended_string_literal(myParser::Extended_string_literalContext * /*ctx*/) override { }
  virtual void exitExtended_string_literal(myParser::Extended_string_literalContext * /*ctx*/) override { }

  virtual void enterStatic_string_literal(myParser::Static_string_literalContext * /*ctx*/) override { }
  virtual void exitStatic_string_literal(myParser::Static_string_literalContext * /*ctx*/) override { }

  virtual void enterInterpolated_string_literal(myParser::Interpolated_string_literalContext * /*ctx*/) override { }
  virtual void exitInterpolated_string_literal(myParser::Interpolated_string_literalContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

