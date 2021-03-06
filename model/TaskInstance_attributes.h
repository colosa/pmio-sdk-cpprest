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

/*
 * TaskInstance_attributes.h
 * 
 * 
 */

#ifndef TaskInstance_attributes_H_
#define TaskInstance_attributes_H_


#include "ModelBase.h"

#include "DateTime.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  TaskInstance_attributes
	: public ModelBase
{
public:
    TaskInstance_attributes();
    virtual ~TaskInstance_attributes();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// TaskInstance_attributes members
	   
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTaskId() const;
    void setTaskId(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getInstanceId() const;
    void setInstanceId(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getGroupId() const;
    void setGroupId(utility::string_t value);
    bool group_idIsSet() const;
    void unsetGroup_id();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUserId() const;
    void setUserId(utility::string_t value);
    bool user_idIsSet() const;
    void unsetUser_id();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
    void setStatus(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getPriority() const;
    void setPriority(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DateTime> getDelegateDate() const;
    void setDelegateDate(std::shared_ptr<DateTime> value);
    bool delegate_dateIsSet() const;
    void unsetDelegate_date();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DateTime> getStartDate() const;
    void setStartDate(std::shared_ptr<DateTime> value);
    bool start_dateIsSet() const;
    void unsetStart_date();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DateTime> getFinishDate() const;
    void setFinishDate(std::shared_ptr<DateTime> value);
    bool finish_dateIsSet() const;
    void unsetFinish_date();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DateTime> getTaskDueDate() const;
    void setTaskDueDate(std::shared_ptr<DateTime> value);
    bool task_due_dateIsSet() const;
    void unsetTask_due_date();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DateTime> getRiskDate() const;
    void setRiskDate(std::shared_ptr<DateTime> value);
    bool risk_dateIsSet() const;
    void unsetRisk_date();
    /// <summary>
    /// 
    /// </summary>
    int32_t getDuration() const;
    void setDuration(int32_t value);
    bool durationIsSet() const;
    void unsetDuration();
    /// <summary>
    /// 
    /// </summary>
    double getInstanceOverduePercentage() const;
    void setInstanceOverduePercentage(double value);
    bool instance_overdue_percentageIsSet() const;
    void unsetInstance_overdue_percentage();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getData() const;
    void setData(utility::string_t value);
    bool dataIsSet() const;
    void unsetData();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getContent() const;
    void setContent(utility::string_t value);
    bool contentIsSet() const;
    void unsetContent();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DateTime> getCreatedAt() const;
    void setCreatedAt(std::shared_ptr<DateTime> value);
    bool created_atIsSet() const;
    void unsetCreated_at();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DateTime> getUpdatedAt() const;
    void setUpdatedAt(std::shared_ptr<DateTime> value);
    bool updated_atIsSet() const;
    void unsetUpdated_at();
    
protected:
    utility::string_t m_Task_id;
    utility::string_t m_Instance_id;
    utility::string_t m_Group_id;
    bool m_Group_idIsSet;
utility::string_t m_User_id;
    bool m_User_idIsSet;
utility::string_t m_Status;
    utility::string_t m_Priority;
    std::shared_ptr<DateTime> m_Delegate_date;
    bool m_Delegate_dateIsSet;
std::shared_ptr<DateTime> m_Start_date;
    bool m_Start_dateIsSet;
std::shared_ptr<DateTime> m_Finish_date;
    bool m_Finish_dateIsSet;
std::shared_ptr<DateTime> m_Task_due_date;
    bool m_Task_due_dateIsSet;
std::shared_ptr<DateTime> m_Risk_date;
    bool m_Risk_dateIsSet;
int32_t m_Duration;
    bool m_DurationIsSet;
double m_Instance_overdue_percentage;
    bool m_Instance_overdue_percentageIsSet;
utility::string_t m_Data;
    bool m_DataIsSet;
utility::string_t m_Content;
    bool m_ContentIsSet;
std::shared_ptr<DateTime> m_Created_at;
    bool m_Created_atIsSet;
std::shared_ptr<DateTime> m_Updated_at;
    bool m_Updated_atIsSet;
};

}
}
}
}

#endif /* TaskInstance_attributes_H_ */
