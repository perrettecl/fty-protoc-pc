/*
 *
 * Copyright (C) 2019 - 2020 Eaton
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */
 
#pragma once
#include <google/protobuf/descriptor.h>

namespace google::protobuf::compiler::fty {

class Formatter;
class ClassGenerator
{
public:
    ClassGenerator(const Descriptor* desc);

    const Descriptor* descriptor() const;

    void generateHeader(Formatter& printer, const std::string& descNamespace) const;
private:
    std::string cppType(const FieldDescriptor* fld) const;
private:
    const Descriptor* m_desc;
};

}