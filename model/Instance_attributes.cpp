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



#include "Instance_attributes.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Instance_attributes::Instance_attributes()
{
    m_Name = U("");
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Process_id = U("");
    m_Parent_instance_id = U("");
    m_Parent_instance_idIsSet = false;
    m_Init_user_id = U("");
    m_Init_user_idIsSet = false;
    m_Pin = U("");
    m_PinIsSet = false;
    m_Duration = nullptr;
    m_DurationIsSet = false;
    m_Status = U("");
    m_Created_atIsSet = false;
    m_Updated_atIsSet = false;
    
}

Instance_attributes::~Instance_attributes()
{
}

void Instance_attributes::validate() 
{
    // TODO: implement validation
}

web::json::value Instance_attributes::toJson() const
{
    web::json::value val = web::json::value::object();
     
	val[U("name")] = ModelBase::toJson(m_Name);
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    val[U("process_id")] = ModelBase::toJson(m_Process_id);
    if(m_Parent_instance_idIsSet)
    {
        val[U("parent_instance_id")] = ModelBase::toJson(m_Parent_instance_id);
    }
    if(m_Init_user_idIsSet)
    {
        val[U("init_user_id")] = ModelBase::toJson(m_Init_user_id);
    }
    if(m_PinIsSet)
    {
        val[U("pin")] = ModelBase::toJson(m_Pin);
    }
    if(m_DurationIsSet)
    {
        val[U("duration")] = ModelBase::toJson(m_Duration);
    }
    val[U("status")] = ModelBase::toJson(m_Status);
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

void Instance_attributes::fromJson(web::json::value& val)
{
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
                
    }
    setProcessId(ModelBase::stringFromJson(val[U("process_id")]));
    if(val.has_field(U("parent_instance_id")))
    {
        setParentInstanceId(ModelBase::stringFromJson(val[U("parent_instance_id")]));
                
    }
    if(val.has_field(U("init_user_id")))
    {
        setInitUserId(ModelBase::stringFromJson(val[U("init_user_id")]));
                
    }
    if(val.has_field(U("pin")))
    {
        setPin(ModelBase::stringFromJson(val[U("pin")]));
                
    }
    if(val.has_field(U("duration")))
    {
        setDuration(ModelBase::int32_tFromJson(val[U("duration")]));
    }
    setStatus(ModelBase::stringFromJson(val[U("status")]));
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

void Instance_attributes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
                
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("process_id"), m_Process_id));
    if(m_Parent_instance_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("parent_instance_id"), m_Parent_instance_id));
                
    }
    if(m_Init_user_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("init_user_id"), m_Init_user_id));
                
    }
    if(m_PinIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("pin"), m_Pin));
                
    }
    if(m_DurationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("duration"), m_Duration));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("status"), m_Status));
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

void Instance_attributes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
                
    }
    setProcessId(ModelBase::stringFromHttpContent(multipart->getContent(U("process_id"))));
    if(multipart->hasContent(U("parent_instance_id")))
    {
        setParentInstanceId(ModelBase::stringFromHttpContent(multipart->getContent(U("parent_instance_id"))));
                
    }
    if(multipart->hasContent(U("init_user_id")))
    {
        setInitUserId(ModelBase::stringFromHttpContent(multipart->getContent(U("init_user_id"))));
                
    }
    if(multipart->hasContent(U("pin")))
    {
        setPin(ModelBase::stringFromHttpContent(multipart->getContent(U("pin"))));
                
    }
    if(multipart->hasContent(U("duration")))
    {
        setDuration(ModelBase::int32_tFromHttpContent(multipart->getContent(U("duration"))));
    }
    setStatus(ModelBase::stringFromHttpContent(multipart->getContent(U("status"))));
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
    
   
utility::string_t Instance_attributes::getName() const
{
	return m_Name;
}
void Instance_attributes::setName(utility::string_t value)
{
	m_Name = value;
    
}
utility::string_t Instance_attributes::getDescription() const
{
	return m_Description;
}
void Instance_attributes::setDescription(utility::string_t value)
{
	m_Description = value;
    m_DescriptionIsSet = true;
}
bool Instance_attributes::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void Instance_attributes::unsetDescription() 
{
    m_DescriptionIsSet = false;
}
utility::string_t Instance_attributes::getProcessId() const
{
	return m_Process_id;
}
void Instance_attributes::setProcessId(utility::string_t value)
{
	m_Process_id = value;
    
}
utility::string_t Instance_attributes::getParentInstanceId() const
{
	return m_Parent_instance_id;
}
void Instance_attributes::setParentInstanceId(utility::string_t value)
{
	m_Parent_instance_id = value;
    m_Parent_instance_idIsSet = true;
}
bool Instance_attributes::parent_instance_idIsSet() const
{
    return m_Parent_instance_idIsSet;
}
void Instance_attributes::unsetParent_instance_id() 
{
    m_Parent_instance_idIsSet = false;
}
utility::string_t Instance_attributes::getInitUserId() const
{
	return m_Init_user_id;
}
void Instance_attributes::setInitUserId(utility::string_t value)
{
	m_Init_user_id = value;
    m_Init_user_idIsSet = true;
}
bool Instance_attributes::init_user_idIsSet() const
{
    return m_Init_user_idIsSet;
}
void Instance_attributes::unsetInit_user_id() 
{
    m_Init_user_idIsSet = false;
}
utility::string_t Instance_attributes::getPin() const
{
	return m_Pin;
}
void Instance_attributes::setPin(utility::string_t value)
{
	m_Pin = value;
    m_PinIsSet = true;
}
bool Instance_attributes::pinIsSet() const
{
    return m_PinIsSet;
}
void Instance_attributes::unsetPin() 
{
    m_PinIsSet = false;
}
int32_t Instance_attributes::getDuration() const
{
	return m_Duration;
}
void Instance_attributes::setDuration(int32_t value)
{
	m_Duration = value;
    m_DurationIsSet = true;
}
bool Instance_attributes::durationIsSet() const
{
    return m_DurationIsSet;
}
void Instance_attributes::unsetDuration() 
{
    m_DurationIsSet = false;
}
utility::string_t Instance_attributes::getStatus() const
{
	return m_Status;
}
void Instance_attributes::setStatus(utility::string_t value)
{
	m_Status = value;
    
}
std::shared_ptr<DateTime> Instance_attributes::getCreatedAt() const
{
	return m_Created_at;
}
void Instance_attributes::setCreatedAt(std::shared_ptr<DateTime> value)
{
	m_Created_at = value;
    m_Created_atIsSet = true;
}
bool Instance_attributes::created_atIsSet() const
{
    return m_Created_atIsSet;
}
void Instance_attributes::unsetCreated_at() 
{
    m_Created_atIsSet = false;
}
std::shared_ptr<DateTime> Instance_attributes::getUpdatedAt() const
{
	return m_Updated_at;
}
void Instance_attributes::setUpdatedAt(std::shared_ptr<DateTime> value)
{
	m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool Instance_attributes::updated_atIsSet() const
{
    return m_Updated_atIsSet;
}
void Instance_attributes::unsetUpdated_at() 
{
    m_Updated_atIsSet = false;
}

}
}
}
}

