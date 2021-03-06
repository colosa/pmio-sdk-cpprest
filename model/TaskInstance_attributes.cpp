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



#include "TaskInstance_attributes.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

TaskInstance_attributes::TaskInstance_attributes()
{
    m_Task_id = U("");
    m_Instance_id = U("");
    m_Group_id = U("");
    m_Group_idIsSet = false;
    m_User_id = U("");
    m_User_idIsSet = false;
    m_Status = U("");
    m_Priority = U("");
    m_Delegate_dateIsSet = false;
    m_Start_dateIsSet = false;
    m_Finish_dateIsSet = false;
    m_Task_due_dateIsSet = false;
    m_Risk_dateIsSet = false;
    m_Duration = nullptr;
    m_DurationIsSet = false;
    m_Instance_overdue_percentage = 0.0;
    m_Instance_overdue_percentageIsSet = false;
    m_Data = U("");
    m_DataIsSet = false;
    m_Content = U("");
    m_ContentIsSet = false;
    m_Created_atIsSet = false;
    m_Updated_atIsSet = false;
    
}

TaskInstance_attributes::~TaskInstance_attributes()
{
}

void TaskInstance_attributes::validate() 
{
    // TODO: implement validation
}

web::json::value TaskInstance_attributes::toJson() const
{
    web::json::value val = web::json::value::object();
     
	val[U("task_id")] = ModelBase::toJson(m_Task_id);
    val[U("instance_id")] = ModelBase::toJson(m_Instance_id);
    if(m_Group_idIsSet)
    {
        val[U("group_id")] = ModelBase::toJson(m_Group_id);
    }
    if(m_User_idIsSet)
    {
        val[U("user_id")] = ModelBase::toJson(m_User_id);
    }
    val[U("status")] = ModelBase::toJson(m_Status);
    val[U("priority")] = ModelBase::toJson(m_Priority);
    if(m_Delegate_dateIsSet)
    {
        val[U("delegate_date")] = ModelBase::toJson(m_Delegate_date);
    }
    if(m_Start_dateIsSet)
    {
        val[U("start_date")] = ModelBase::toJson(m_Start_date);
    }
    if(m_Finish_dateIsSet)
    {
        val[U("finish_date")] = ModelBase::toJson(m_Finish_date);
    }
    if(m_Task_due_dateIsSet)
    {
        val[U("task_due_date")] = ModelBase::toJson(m_Task_due_date);
    }
    if(m_Risk_dateIsSet)
    {
        val[U("risk_date")] = ModelBase::toJson(m_Risk_date);
    }
    if(m_DurationIsSet)
    {
        val[U("duration")] = ModelBase::toJson(m_Duration);
    }
    if(m_Instance_overdue_percentageIsSet)
    {
        val[U("instance_overdue_percentage")] = ModelBase::toJson(m_Instance_overdue_percentage);
    }
    if(m_DataIsSet)
    {
        val[U("data")] = ModelBase::toJson(m_Data);
    }
    if(m_ContentIsSet)
    {
        val[U("content")] = ModelBase::toJson(m_Content);
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

void TaskInstance_attributes::fromJson(web::json::value& val)
{
    setTaskId(ModelBase::stringFromJson(val[U("task_id")]));
    setInstanceId(ModelBase::stringFromJson(val[U("instance_id")]));
    if(val.has_field(U("group_id")))
    {
        setGroupId(ModelBase::stringFromJson(val[U("group_id")]));
                
    }
    if(val.has_field(U("user_id")))
    {
        setUserId(ModelBase::stringFromJson(val[U("user_id")]));
                
    }
    setStatus(ModelBase::stringFromJson(val[U("status")]));
    setPriority(ModelBase::stringFromJson(val[U("priority")]));
    if(val.has_field(U("delegate_date")))
    {
        if(!val[U("delegate_date")].is_null()) 
        {
            std::shared_ptr<DateTime> newItem(new DateTime());
            newItem->fromJson(val[U("delegate_date")]);
            setDelegateDate( newItem );
        }
                
    }
    if(val.has_field(U("start_date")))
    {
        if(!val[U("start_date")].is_null()) 
        {
            std::shared_ptr<DateTime> newItem(new DateTime());
            newItem->fromJson(val[U("start_date")]);
            setStartDate( newItem );
        }
                
    }
    if(val.has_field(U("finish_date")))
    {
        if(!val[U("finish_date")].is_null()) 
        {
            std::shared_ptr<DateTime> newItem(new DateTime());
            newItem->fromJson(val[U("finish_date")]);
            setFinishDate( newItem );
        }
                
    }
    if(val.has_field(U("task_due_date")))
    {
        if(!val[U("task_due_date")].is_null()) 
        {
            std::shared_ptr<DateTime> newItem(new DateTime());
            newItem->fromJson(val[U("task_due_date")]);
            setTaskDueDate( newItem );
        }
                
    }
    if(val.has_field(U("risk_date")))
    {
        if(!val[U("risk_date")].is_null()) 
        {
            std::shared_ptr<DateTime> newItem(new DateTime());
            newItem->fromJson(val[U("risk_date")]);
            setRiskDate( newItem );
        }
                
    }
    if(val.has_field(U("duration")))
    {
        setDuration(ModelBase::int32_tFromJson(val[U("duration")]));
    }
    if(val.has_field(U("instance_overdue_percentage")))
    {
        setInstanceOverduePercentage(ModelBase::doubleFromJson(val[U("instance_overdue_percentage")]));
    }
    if(val.has_field(U("data")))
    {
        setData(ModelBase::stringFromJson(val[U("data")]));
                
    }
    if(val.has_field(U("content")))
    {
        setContent(ModelBase::stringFromJson(val[U("content")]));
                
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

void TaskInstance_attributes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	multipart->add(ModelBase::toHttpContent(namePrefix + U("task_id"), m_Task_id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("instance_id"), m_Instance_id));
    if(m_Group_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("group_id"), m_Group_id));
                
    }
    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("user_id"), m_User_id));
                
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("status"), m_Status));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("priority"), m_Priority));
    if(m_Delegate_dateIsSet)
    {
        if (m_Delegate_date.get())
        {
            m_Delegate_date->toMultipart(multipart, U("delegate_date."));
        }
                
    }
    if(m_Start_dateIsSet)
    {
        if (m_Start_date.get())
        {
            m_Start_date->toMultipart(multipart, U("start_date."));
        }
                
    }
    if(m_Finish_dateIsSet)
    {
        if (m_Finish_date.get())
        {
            m_Finish_date->toMultipart(multipart, U("finish_date."));
        }
                
    }
    if(m_Task_due_dateIsSet)
    {
        if (m_Task_due_date.get())
        {
            m_Task_due_date->toMultipart(multipart, U("task_due_date."));
        }
                
    }
    if(m_Risk_dateIsSet)
    {
        if (m_Risk_date.get())
        {
            m_Risk_date->toMultipart(multipart, U("risk_date."));
        }
                
    }
    if(m_DurationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("duration"), m_Duration));
    }
    if(m_Instance_overdue_percentageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("instance_overdue_percentage"), m_Instance_overdue_percentage));
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("data"), m_Data));
                
    }
    if(m_ContentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("content"), m_Content));
                
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

void TaskInstance_attributes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    setTaskId(ModelBase::stringFromHttpContent(multipart->getContent(U("task_id"))));
    setInstanceId(ModelBase::stringFromHttpContent(multipart->getContent(U("instance_id"))));
    if(multipart->hasContent(U("group_id")))
    {
        setGroupId(ModelBase::stringFromHttpContent(multipart->getContent(U("group_id"))));
                
    }
    if(multipart->hasContent(U("user_id")))
    {
        setUserId(ModelBase::stringFromHttpContent(multipart->getContent(U("user_id"))));
                
    }
    setStatus(ModelBase::stringFromHttpContent(multipart->getContent(U("status"))));
    setPriority(ModelBase::stringFromHttpContent(multipart->getContent(U("priority"))));
    if(multipart->hasContent(U("delegate_date")))
    {
        if(multipart->hasContent(U("delegate_date")))
        {
            std::shared_ptr<DateTime> newItem(new DateTime());
            newItem->fromMultiPart(multipart, U("delegate_date."));
            setDelegateDate( newItem );
        }
                
    }
    if(multipart->hasContent(U("start_date")))
    {
        if(multipart->hasContent(U("start_date")))
        {
            std::shared_ptr<DateTime> newItem(new DateTime());
            newItem->fromMultiPart(multipart, U("start_date."));
            setStartDate( newItem );
        }
                
    }
    if(multipart->hasContent(U("finish_date")))
    {
        if(multipart->hasContent(U("finish_date")))
        {
            std::shared_ptr<DateTime> newItem(new DateTime());
            newItem->fromMultiPart(multipart, U("finish_date."));
            setFinishDate( newItem );
        }
                
    }
    if(multipart->hasContent(U("task_due_date")))
    {
        if(multipart->hasContent(U("task_due_date")))
        {
            std::shared_ptr<DateTime> newItem(new DateTime());
            newItem->fromMultiPart(multipart, U("task_due_date."));
            setTaskDueDate( newItem );
        }
                
    }
    if(multipart->hasContent(U("risk_date")))
    {
        if(multipart->hasContent(U("risk_date")))
        {
            std::shared_ptr<DateTime> newItem(new DateTime());
            newItem->fromMultiPart(multipart, U("risk_date."));
            setRiskDate( newItem );
        }
                
    }
    if(multipart->hasContent(U("duration")))
    {
        setDuration(ModelBase::int32_tFromHttpContent(multipart->getContent(U("duration"))));
    }
    if(multipart->hasContent(U("instance_overdue_percentage")))
    {
        setInstanceOverduePercentage(ModelBase::doubleFromHttpContent(multipart->getContent(U("instance_overdue_percentage"))));
    }
    if(multipart->hasContent(U("data")))
    {
        setData(ModelBase::stringFromHttpContent(multipart->getContent(U("data"))));
                
    }
    if(multipart->hasContent(U("content")))
    {
        setContent(ModelBase::stringFromHttpContent(multipart->getContent(U("content"))));
                
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
    
   
utility::string_t TaskInstance_attributes::getTaskId() const
{
	return m_Task_id;
}
void TaskInstance_attributes::setTaskId(utility::string_t value)
{
	m_Task_id = value;
    
}
utility::string_t TaskInstance_attributes::getInstanceId() const
{
	return m_Instance_id;
}
void TaskInstance_attributes::setInstanceId(utility::string_t value)
{
	m_Instance_id = value;
    
}
utility::string_t TaskInstance_attributes::getGroupId() const
{
	return m_Group_id;
}
void TaskInstance_attributes::setGroupId(utility::string_t value)
{
	m_Group_id = value;
    m_Group_idIsSet = true;
}
bool TaskInstance_attributes::group_idIsSet() const
{
    return m_Group_idIsSet;
}
void TaskInstance_attributes::unsetGroup_id() 
{
    m_Group_idIsSet = false;
}
utility::string_t TaskInstance_attributes::getUserId() const
{
	return m_User_id;
}
void TaskInstance_attributes::setUserId(utility::string_t value)
{
	m_User_id = value;
    m_User_idIsSet = true;
}
bool TaskInstance_attributes::user_idIsSet() const
{
    return m_User_idIsSet;
}
void TaskInstance_attributes::unsetUser_id() 
{
    m_User_idIsSet = false;
}
utility::string_t TaskInstance_attributes::getStatus() const
{
	return m_Status;
}
void TaskInstance_attributes::setStatus(utility::string_t value)
{
	m_Status = value;
    
}
utility::string_t TaskInstance_attributes::getPriority() const
{
	return m_Priority;
}
void TaskInstance_attributes::setPriority(utility::string_t value)
{
	m_Priority = value;
    
}
std::shared_ptr<DateTime> TaskInstance_attributes::getDelegateDate() const
{
	return m_Delegate_date;
}
void TaskInstance_attributes::setDelegateDate(std::shared_ptr<DateTime> value)
{
	m_Delegate_date = value;
    m_Delegate_dateIsSet = true;
}
bool TaskInstance_attributes::delegate_dateIsSet() const
{
    return m_Delegate_dateIsSet;
}
void TaskInstance_attributes::unsetDelegate_date() 
{
    m_Delegate_dateIsSet = false;
}
std::shared_ptr<DateTime> TaskInstance_attributes::getStartDate() const
{
	return m_Start_date;
}
void TaskInstance_attributes::setStartDate(std::shared_ptr<DateTime> value)
{
	m_Start_date = value;
    m_Start_dateIsSet = true;
}
bool TaskInstance_attributes::start_dateIsSet() const
{
    return m_Start_dateIsSet;
}
void TaskInstance_attributes::unsetStart_date() 
{
    m_Start_dateIsSet = false;
}
std::shared_ptr<DateTime> TaskInstance_attributes::getFinishDate() const
{
	return m_Finish_date;
}
void TaskInstance_attributes::setFinishDate(std::shared_ptr<DateTime> value)
{
	m_Finish_date = value;
    m_Finish_dateIsSet = true;
}
bool TaskInstance_attributes::finish_dateIsSet() const
{
    return m_Finish_dateIsSet;
}
void TaskInstance_attributes::unsetFinish_date() 
{
    m_Finish_dateIsSet = false;
}
std::shared_ptr<DateTime> TaskInstance_attributes::getTaskDueDate() const
{
	return m_Task_due_date;
}
void TaskInstance_attributes::setTaskDueDate(std::shared_ptr<DateTime> value)
{
	m_Task_due_date = value;
    m_Task_due_dateIsSet = true;
}
bool TaskInstance_attributes::task_due_dateIsSet() const
{
    return m_Task_due_dateIsSet;
}
void TaskInstance_attributes::unsetTask_due_date() 
{
    m_Task_due_dateIsSet = false;
}
std::shared_ptr<DateTime> TaskInstance_attributes::getRiskDate() const
{
	return m_Risk_date;
}
void TaskInstance_attributes::setRiskDate(std::shared_ptr<DateTime> value)
{
	m_Risk_date = value;
    m_Risk_dateIsSet = true;
}
bool TaskInstance_attributes::risk_dateIsSet() const
{
    return m_Risk_dateIsSet;
}
void TaskInstance_attributes::unsetRisk_date() 
{
    m_Risk_dateIsSet = false;
}
int32_t TaskInstance_attributes::getDuration() const
{
	return m_Duration;
}
void TaskInstance_attributes::setDuration(int32_t value)
{
	m_Duration = value;
    m_DurationIsSet = true;
}
bool TaskInstance_attributes::durationIsSet() const
{
    return m_DurationIsSet;
}
void TaskInstance_attributes::unsetDuration() 
{
    m_DurationIsSet = false;
}
double TaskInstance_attributes::getInstanceOverduePercentage() const
{
	return m_Instance_overdue_percentage;
}
void TaskInstance_attributes::setInstanceOverduePercentage(double value)
{
	m_Instance_overdue_percentage = value;
    m_Instance_overdue_percentageIsSet = true;
}
bool TaskInstance_attributes::instance_overdue_percentageIsSet() const
{
    return m_Instance_overdue_percentageIsSet;
}
void TaskInstance_attributes::unsetInstance_overdue_percentage() 
{
    m_Instance_overdue_percentageIsSet = false;
}
utility::string_t TaskInstance_attributes::getData() const
{
	return m_Data;
}
void TaskInstance_attributes::setData(utility::string_t value)
{
	m_Data = value;
    m_DataIsSet = true;
}
bool TaskInstance_attributes::dataIsSet() const
{
    return m_DataIsSet;
}
void TaskInstance_attributes::unsetData() 
{
    m_DataIsSet = false;
}
utility::string_t TaskInstance_attributes::getContent() const
{
	return m_Content;
}
void TaskInstance_attributes::setContent(utility::string_t value)
{
	m_Content = value;
    m_ContentIsSet = true;
}
bool TaskInstance_attributes::contentIsSet() const
{
    return m_ContentIsSet;
}
void TaskInstance_attributes::unsetContent() 
{
    m_ContentIsSet = false;
}
std::shared_ptr<DateTime> TaskInstance_attributes::getCreatedAt() const
{
	return m_Created_at;
}
void TaskInstance_attributes::setCreatedAt(std::shared_ptr<DateTime> value)
{
	m_Created_at = value;
    m_Created_atIsSet = true;
}
bool TaskInstance_attributes::created_atIsSet() const
{
    return m_Created_atIsSet;
}
void TaskInstance_attributes::unsetCreated_at() 
{
    m_Created_atIsSet = false;
}
std::shared_ptr<DateTime> TaskInstance_attributes::getUpdatedAt() const
{
	return m_Updated_at;
}
void TaskInstance_attributes::setUpdatedAt(std::shared_ptr<DateTime> value)
{
	m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool TaskInstance_attributes::updated_atIsSet() const
{
    return m_Updated_atIsSet;
}
void TaskInstance_attributes::unsetUpdated_at() 
{
    m_Updated_atIsSet = false;
}

}
}
}
}

