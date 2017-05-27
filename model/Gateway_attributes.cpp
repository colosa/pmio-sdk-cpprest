/**
 * ProcessMaker API
 * This ProcessMaker Core API provide access to the new generation engine with BPMN 2.0 support. The current Alpha 1.0 version supports  the part of BPM system functionality like process import, process execution, task assignment
 *
 * OpenAPI spec version: 1.0.0
 * Contact: alpha-program@processmaker.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */



#include "Gateway_attributes.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Gateway_attributes::Gateway_attributes()
{
    m_Name = U("");
    m_NameIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Process_id = U("");
    m_Type = U("");
    m_Direction = U("");
    m_DirectionIsSet = false;
    m_Created_atIsSet = false;
    m_Updated_atIsSet = false;
    
}

Gateway_attributes::~Gateway_attributes()
{
}

void Gateway_attributes::validate() 
{
    // TODO: implement validation
}

web::json::value Gateway_attributes::toJson() const
{
    web::json::value val = web::json::value::object();
     
	if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    val[U("process_id")] = ModelBase::toJson(m_Process_id);
    val[U("type")] = ModelBase::toJson(m_Type);
    if(m_DirectionIsSet)
    {
        val[U("direction")] = ModelBase::toJson(m_Direction);
    }
    if(m_Created_atIsSet)
    {
        val[U("created_at")] = ModelBase::toJson(m_Created_at);
    }
    if(m_Updated_atIsSet)
    {
        val[U("updated_at")] = ModelBase::toJson(m_Updated_at);
    }
    

    return val;
}

void Gateway_attributes::fromJson(web::json::value& val)
{
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
                
    }
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
                
    }
    setProcessId(ModelBase::stringFromJson(val[U("process_id")]));
    setType(ModelBase::stringFromJson(val[U("type")]));
    if(val.has_field(U("direction")))
    {
        setDirection(ModelBase::stringFromJson(val[U("direction")]));
                
    }
    if(val.has_field(U("created_at")))
    {
        if(!val[U("created_at")].is_null()) 
        {
            std::shared_ptr<DateTime> newItem(new DateTime());
            newItem->fromJson(val[U("created_at")]);
            setCreatedAt( newItem );
        }
                
    }
    if(val.has_field(U("updated_at")))
    {
        if(!val[U("updated_at")].is_null()) 
        {
            std::shared_ptr<DateTime> newItem(new DateTime());
            newItem->fromJson(val[U("updated_at")]);
            setUpdatedAt( newItem );
        }
                
    }
    
}

void Gateway_attributes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
                
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
                
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("process_id"), m_Process_id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    if(m_DirectionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("direction"), m_Direction));
                
    }
    if(m_Created_atIsSet)
    {
        if (m_Created_at.get())
        {
            m_Created_at->toMultipart(multipart, U("created_at."));
        }
                
    }
    if(m_Updated_atIsSet)
    {
        if (m_Updated_at.get())
        {
            m_Updated_at->toMultipart(multipart, U("updated_at."));
        }
                
    }
    
}

void Gateway_attributes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
                
    }
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
                
    }
    setProcessId(ModelBase::stringFromHttpContent(multipart->getContent(U("process_id"))));
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    if(multipart->hasContent(U("direction")))
    {
        setDirection(ModelBase::stringFromHttpContent(multipart->getContent(U("direction"))));
                
    }
    if(multipart->hasContent(U("created_at")))
    {
        if(multipart->hasContent(U("created_at")))
        {
            std::shared_ptr<DateTime> newItem(new DateTime());
            newItem->fromMultiPart(multipart, U("created_at."));
            setCreatedAt( newItem );
        }
                
    }
    if(multipart->hasContent(U("updated_at")))
    {
        if(multipart->hasContent(U("updated_at")))
        {
            std::shared_ptr<DateTime> newItem(new DateTime());
            newItem->fromMultiPart(multipart, U("updated_at."));
            setUpdatedAt( newItem );
        }
                
    }
    
}
    
   
utility::string_t Gateway_attributes::getName() const
{
	return m_Name;
}
void Gateway_attributes::setName(utility::string_t value)
{
	m_Name = value;
    m_NameIsSet = true;
}
bool Gateway_attributes::nameIsSet() const
{
    return m_NameIsSet;
}
void Gateway_attributes::unsetName() 
{
    m_NameIsSet = false;
}
utility::string_t Gateway_attributes::getDescription() const
{
	return m_Description;
}
void Gateway_attributes::setDescription(utility::string_t value)
{
	m_Description = value;
    m_DescriptionIsSet = true;
}
bool Gateway_attributes::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void Gateway_attributes::unsetDescription() 
{
    m_DescriptionIsSet = false;
}
utility::string_t Gateway_attributes::getProcessId() const
{
	return m_Process_id;
}
void Gateway_attributes::setProcessId(utility::string_t value)
{
	m_Process_id = value;
    
}
utility::string_t Gateway_attributes::getType() const
{
	return m_Type;
}
void Gateway_attributes::setType(utility::string_t value)
{
	m_Type = value;
    
}
utility::string_t Gateway_attributes::getDirection() const
{
	return m_Direction;
}
void Gateway_attributes::setDirection(utility::string_t value)
{
	m_Direction = value;
    m_DirectionIsSet = true;
}
bool Gateway_attributes::directionIsSet() const
{
    return m_DirectionIsSet;
}
void Gateway_attributes::unsetDirection() 
{
    m_DirectionIsSet = false;
}
std::shared_ptr<DateTime> Gateway_attributes::getCreatedAt() const
{
	return m_Created_at;
}
void Gateway_attributes::setCreatedAt(std::shared_ptr<DateTime> value)
{
	m_Created_at = value;
    m_Created_atIsSet = true;
}
bool Gateway_attributes::created_atIsSet() const
{
    return m_Created_atIsSet;
}
void Gateway_attributes::unsetCreated_at() 
{
    m_Created_atIsSet = false;
}
std::shared_ptr<DateTime> Gateway_attributes::getUpdatedAt() const
{
	return m_Updated_at;
}
void Gateway_attributes::setUpdatedAt(std::shared_ptr<DateTime> value)
{
	m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool Gateway_attributes::updated_atIsSet() const
{
    return m_Updated_atIsSet;
}
void Gateway_attributes::unsetUpdated_at() 
{
    m_Updated_atIsSet = false;
}

}
}
}
}
