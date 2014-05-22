# Araport Community Jobs

This module enables the posting and moderation of jobs. Users in the
_content editor_ role have moderation privileges. Any registered user can
post a job. It then enters moderation where, if approved, it will appears on the
`/community/jobs` page.

## Installation note

Enable this module using [Drush]():

```
drush en araport_community_jobs
```

or via the administration interface (`/admin/modules`).

Due to the [inability of Features to export triggers and actions](https://drupal.org/node/1113126)
you must configure the workflow trigger/actions for the views to work appropriately.

After enabling this module, navigate to `/admin/config/workflow/workflow/manage/approve_job_postings/states` and
click `Actions` on any of the state operations to get to the Triggers configuration. Assign the following actions:

|Trigger|Action(s)|
|-|-|
|WHEN NODE _JOB_POSTING_ MOVES FROM _SUBMITTED_ TO _SUBMITTED_|Unpublish content; Remove content from front page|
|WHEN NODE _JOB_POSTING_ MOVES FROM _SUBMITTED_ TO _APPROVE_|Publish content; Promote content to front page|
|WHEN NODE _JOB_POSTING_ MOVES FROM _APPROVE_ TO _SUBMITTED_|Unpublish content; Remove content from front page|
|WHEN NODE _JOB_POSTING_ MOVES FROM _APPROVE_ TO _APPROVE_|Publish content; Promote content to front page|
