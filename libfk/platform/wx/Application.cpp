﻿/***********************************************************************//**	@file***************************************************************************/#include "libfk/framework/Context.hpp"#include "libfk/platform/wx/Application.hpp"namespace fk {namespace platform {namespace wx {/***********************************************************************//**	@brief コンストラクタ***************************************************************************/Application::Application() {}/***********************************************************************//**	@brief デストラクタ***************************************************************************/Application::~Application() {}/***********************************************************************//**	@brief コンテキストを生成する        @return コンテキスト***************************************************************************/ContextPtr Application::createContext() {  return std::make_shared<Context>();}/***********************************************************************//**	@brief ***************************************************************************/void Application::OnInitCmdLine(wxCmdLineParser& parser) {  context_ = createContext();  super::OnInitCmdLine(parser);}/***********************************************************************//**	$Id$***************************************************************************/}}}