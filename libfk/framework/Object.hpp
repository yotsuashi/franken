﻿/***********************************************************************//**	@file***************************************************************************/#pragma once#include "libfk/framework/Updatable.hpp"namespace fk {namespace framework {/***********************************************************************//**	@brief ***************************************************************************/class Object  : public Updatable{  using super = Updatable; private:  std::weak_ptr<Context> context_;  std::vector<ComponentPtr> components_;  std::vector<ObjectPtr> children_; public:  Object(const ContextPtr& context);  ~Object() override;  ContextPtr getContext() const;  FK_REFER(Components, components_);  FK_REFER(Children, children_);  template <class T, class... Args>  std::shared_ptr<T> appendComponent(Args... args) {    auto component = std::make_shared<T>(*this, args...);    getComponents().push_back(component);    return component;  }  void update() override;};/***********************************************************************//**	$Id$***************************************************************************/}}